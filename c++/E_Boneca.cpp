┌─────────────────────────────────────────────────────────────────┐
│                         Load Balancer                            │
└────────────────────────┬────────────────────────────────────────┘
                         │
        ┌────────────────┴────────────────┐
        │                                  │
┌───────▼────────┐              ┌─────────▼────────┐
│  API Gateway   │              │  API Gateway     │
│   (Instance 1) │              │   (Instance 2)   │
└───────┬────────┘              └─────────┬────────┘
        │                                  │
        └────────────────┬─────────────────┘
                         │
        ┌────────────────▼────────────────┐
        │     Booking Controller          │
        │   (Request Validation)          │
        └────────────────┬────────────────┘
                         │
        ┌────────────────▼────────────────┐
        │   Booking Service (Facade)      │
        │  ┌──────────────────────────┐   │
        │  │ CONCURRENCY BOUNDARY     │   │
        │  │ (Synchronized/Locks)     │   │
        │  └──────────────────────────┘   │
        └─┬─────────────┬─────────────┬───┘
          │             │             │
┌─────────▼──────┐ ┌───▼──────────┐ ┌▼─────────────┐
│ Booking        │ │  Payment     │ │ Notification │
│ Repository     │ │  Service     │ │ Service      │
│ (Thread-safe)  │ │  (Strategy)  │ │              │
└────────┬───────┘ └───┬──────────┘ └──────────────┘
         │             │
         │      ┌──────▼────────┐
         │      │ PayPal/Stripe │
         │      │ Credit Card   │
         │      │ (Plugins)     │
         │      └───────────────┘
         │
┌────────▼───────────────────────┐
│        Database                │
│  ┌──────────────────────────┐  │
│  │ Row-Level Locking        │  │
│  │ (Pessimistic Locking)    │  │
│  └──────────────────────────┘  │
│                                │
│  Tables:                       │
│  - bookings (with version)     │
│  - inventory (seats/rooms)     │
│  - users                       │
└────────────────────────────────┘

Legend:
━━━ : Synchronous flow
─ ─ : Async/Event flow
[===] : Concurrency control point
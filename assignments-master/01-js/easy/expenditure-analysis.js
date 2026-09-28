/*
  Implement a function `calculateTotalSpentByCategory` which takes a list of transactions as parameter
  and return a list of objects where each object is unique category-wise and has total price spent as its value.
  transactions is an array where each
  Transaction - an object like 
        {
		id: 1,
		timestamp: 1656076800000,
		price: 10,
		category: 'Food',
		itemName: 'Pizza',
	}
  Output - [{ category: 'Food', totalSpent: 10 }] // Can have multiple categories, only one example is mentioned here
*/

function calculateTotalSpentByCategory(transactions) {
  //return [];
  // let map = new Map();
  // for(let i = 0; i < transactions.length; i++) {
  //   let category = transactions[i]["category"];
  //   let price = transactions[i]["price"];
  //   map.set(category, (map.get(category) || 0) + price);
  // }

  // let result = [];
  // map.forEach((value, key) => {
  //   result.push({
  //     category: key,
  //     totalSpent: value
  //   });
  // });

  // return result;
    
    
    let totals = {};
    for(let i = 0; i < transactions.length; i++) {
       let categories = transactions[i]["category"];
       let price = transactions[i]["price"];
       
       totals[categories] = (totals[categories] || 0) + price;
    }

    let result = [];

    for(let categories in totals) {
       result.push({
         category: categories,
         totalSpent: totals[categories]
       });
    }

    return result;
}

module.exports = calculateTotalSpentByCategory;

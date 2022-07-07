var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');


lines.forEach(element => {

    let nums = element.split(" ")
    
    let str = '';
    let sum = 0;

    for(var tmp = nums[1]; tmp <= nums[0]; tmp++){
        str += tmp+" ";
        sum += parseInt(tmp);
    }
    
    if(nums[0] >= 1 && nums[1] >= 1){
        console.log(`${str}Sum=${sum}`)
    }
      

});



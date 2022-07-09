var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

const nset = new Map([
                    ["W",1.0],
                    ["H",0.5],
                    ["Q",0.25],
                    ["E",0.125],
                    ["S",0.0625],
                    ["T",0.03125],
                    ["X",0.015625]
                ]);

lines.forEach(item => {
    let counter = 0;
    let compass = item.split("/")
    
    if(item !== '*'){
        compass.forEach( element => {
            let aux = 0;

            for(var i = 0; i < element.length ; i++){
                if( nset.has(element.charAt(i)) ){
                    aux += nset.get(element.charAt(i));
                }
            }

            if(aux === 1 );
            counter += 1;
        });
        console.log(counter);
    }
    
})


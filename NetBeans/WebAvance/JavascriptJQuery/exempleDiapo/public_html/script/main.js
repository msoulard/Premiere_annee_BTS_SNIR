var a='5';
let b=6;
c=5;
objet={};
tableau=[];

tableau[0]=15;
tableau[1]=23;
objet.nom="Maëva";
objet.age=18;
club=[{nom:"SOULARD",age:18},{nom:"PACOT",age:18}];

if(a===5){
    console.log("a vaut 5");
}else{
    console.log("a est différent de 5");
}
/**
 * @description fonction nommée
 * @param {type} x
 * @param {type} y
 * @returns {unresolved}
 */
function somme(x,y){
    return x+y;
}
let d=somme(b,c);
console.log(d);
/**
 * @description fonction anonyme
 * @param {type} x
 * @param {type} y
 * @returns {Number}
 */
z=function (x,y){
    return x-y;
};
diff=z(b,c);
console.log(diff);
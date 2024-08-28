var tableau = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
var test = ["anana", "baru", "bary", "kar", "set", "who"];

function find(tab, e) {

    var debut = 0,
        fin = tab.length - 1,
        milieu = Math.floor((debut + fin) / 2),
        trouve = false;

    while (debut <= fin) {
        if (tab[milieu] == e) {
            trouve = true;
            break;
        }
        else if (tab[milieu] > e) {
            fin = milieu - 1;
            /*console.log(debut, fin)*/
        }
        else {
            debut = milieu + 1;
           /* console.log(debut, fin)*/
        }
        
        milieu = Math.floor((debut + fin) / 2);
    }
    if (trouve == false) {
        console.log('Introuvable');
    }
    else {
        console.log(milieu);
    }
}

find(tableau, 11);
find(test, "anana");

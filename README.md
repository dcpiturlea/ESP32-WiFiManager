# ESP32-WiFiManager
aplicatie ce foloseste libraria WiFiManager pentru a conecta microc. la WIFI in mod dinamic
Pentru a nu hardcoda numele retelei wifi si parola, ceea ce ar scadea portabilitatea unui device IOT spre 0:
Libraria WiFiManager ofera o modalitate foarte buna pentru gestionarea conectarii placilor de dezvoltare la retelele wifi.

BENEFICII si FUNCTIONARE:
-Portabilitatea totala a aparatului IOT.
-La fiecare reconectare a aparatului(dupa ce pica curentul sau i se schimba bateria, etc), microcontrollerul va cauta in memoria interna credentialele
    -daca nu se potriveste parola sau numele retelei WIFI atunci device-ul va porni conexiunea WIFI amintita mai jos pentru schimbarea datelor de logare


WORKFLOW:
Aparatul creaza o conexiune WIFI cu numele AutoConnectAP, la care utilizatorul se va conecta de pe telefon, laptop.
In momentul de fata conexiunea nu necesita parola, dar poate fi setata una.
La conectarea la reteaua de wifi utilizatorul este redirectionat in browser catre ip-ul personal.
Aici este creat de un server web o pagina web cu mai multe elemente.
Utilizatorul trebuie sa apese butonul CONFIGURE WIFI, iar apoi va fi redirectionat catre pagina unde apar toate retelele disponibile.
Aici trebuie aleasa reteaua, prin click, iar mai apoi scrisa parola in input.
La sfarsit trebuie apasat butonul SAVE care va trimite credentialele catre cipul microcontroller-ului.


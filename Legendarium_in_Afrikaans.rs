use std::io;

fn main() {
let mut Exit = String::new();

println!("J. R. R. Tolkien - Die Here van die ringe.");
println!("Een van vier");
println!("-----------------------------------------------");
println!("DIE HERE VAN DIE RINGE");
println!("deur");
println!("J. R. R. TOLKIEN");
println!("Deel een: The Fellowship of the Ring");
println!("Deel Twee: Die Twee Torings");
println!("Deel drie: Die terugkeer van die koning");
println!("Voltooi met indeks en volledige bylaes");
println!("Drie ringe vir die Elfkonings onder die lug,");
println!("Sewe vir die Dwerg-here in hulle klipsale,");
println!("Nege vir sterflike mans wat gedoem is om te sterf,");
println!("Een vir die Donker Heer op sy donker troon,");
println!("In die land van Mordor waar die skaduwees lê.");
println!("Een ring om hulle almal te regeer,");
println!("Een ring om hulle te vind,");
println!("Een Ring om hulle almal te bring en in die duisternis bind hulle,");
println!("In die land van Mordor waar die skaduwees lê.");
println!("INHOUD");
println!("VOORWOORD");
println!("VOORWOORD (PROLOGUE)");
println!("Een: Oor Hobbits");
println!("Twee: Met betrekking tot pyp-onkruid");
println!("Drie: Van die Orde van die Shire");
println!("Vier: Van die vind van die ring");
println!("Nota op die Shire-rekords");
println!("DIE GEMEENSKAP VAN DIE RING");
println!("Boek Een:");
println!("Hoofstuk Een 'n Langverwagte Partytjie");
println!("Hoofstuk Twee Die skaduwee van die verlede");
println!("Hoofstuk Drie Drie is Maatskappy");
println!("Hoofstuk Vier 'n Kortpad na sampioene");
println!("Hoofstuk Vyf 'n Sameswering ontmasker");
println!("Hoofstuk Ses Die Ou Bos");
println!("Hoofstuk sewe in die huis van Tom Bombadil");
println!("Hoofstuk Agt Mis op die Barrow-Downs");
println!("Hoofstuk Nege by die teken van die steigerende ponie");
println!("Hoofstuk Tien Strider");
println!("Hoofstuk elf 'n Mes in die donker");
println!("Hoofstuk Twaalf Vlug na die Ford");
println!("Boek Twee:");
println!("Hoofstuk Een Baie Vergaderings");
println!("Hoofstuk Twee Die Raad van Elrond");
println!("Hoofstuk Drie Die Ring Gaan Suid");
println!("Hoofstuk Vier 'n Reis in die donker");
println!("Hoofstuk Vyf Die Brug van Khazad-dûm");
println!("Hoofstuk Ses Lothlórien");
println!("Hoofstuk Sewe Die spieël van Galadriel");
println!("Hoofstuk Agt Vaarwel aan Lórien");
println!("Hoofstuk Nege Die Groot Rivier");
println!("Hoofstuk Tien Die Verbreking van die Genootskap");
println!("DIE TWEE TORINGS");
println!("Boek Drie:");
println!("Hoofstuk Een Die vertrek van Boromir");
println!("Hoofstuk Twee Die ruiters van Rohan");
println!("Hoofstuk Drie Die Uruk-Hai");
println!("Hoofstuk Vier Boombaard");
println!("Hoofstuk Vyf Die Wit Ruiter");
println!("Hoofstuk Ses Die Koning van die Goue Saal");
println!("Hoofstuk Sewe Roer is diep");
println!("Hoofstuk Agt Die pad na Isengard");
println!("Hoofstuk Nege Flotsam en Jetsam");
println!("Hoofstuk Tien Die Stem van Saruman");
println!("Hoofstuk Elf Die Palantir");
println!("Boek Vier:");
println!("Hoofstuk Een Die teem van Sméagol");
println!("Hoofstuk Twee Die deurgang van die moerasse");
println!("Hoofstuk Drie Die Swart Hek is Gesluit");
println!("Hoofstuk Vier Van Kruie en Gestoofde Konyn");
println!("Hoofstuk Vyf Die Venster op die Weste");
println!("Hoofstuk Ses Die Verbode Poel");
println!("Hoofstuk Sewe Reis na die Kruispad");
println!("Hoofstuk Agt Die trappe van Cirith Ungol");
println!("Hoofstuk Nege Shelob's Lair");
println!("Hoofstuk Tien Die Keuses van Meester Samwise");
println!("DIE TERUGKEER VAN DIE KONING");
println!("Boek Vyf:");
println!("Hoofstuk Een: Minas Tirith");
println!("Hoofstuk Twee: Die heengaan van die Grey Company");
println!("Hoofstuk Drie: Die Samestelling van Rohan");
println!("Hoofstuk Vier: Die beleg van Gondor");
println!("Hoofstuk Vyf: Die rit van die Rohirrim");
println!("Hoofstuk Ses: Die Slag van die Pelennor-velde");
println!("Hoofstuk Sewe: Die brandstapel van Denethor");
println!("Hoofstuk Agt: Die Huise van Genesing");
println!("Hoofstuk Nege: Die laaste debat");
println!("Hoofstuk Tien: Die Swart Hek gaan oop");
println!("Boek Ses:");
println!("Hoofstuk Een: Die toring van Cirith Ungol");
println!("Hoofstuk Twee: Die land van skaduwee");
println!("Hoofstuk Drie: Mount Doom");
println!("Hoofstuk Vier: Die veld van Cormallen");
println!("Hoofstuk Vyf: Die Rentmeester en die Koning");
println!("Hoofstuk Ses: Baie Afskeidings");
println!("Hoofstuk Sewe: Huistoe");
println!("Hoofstuk Agt: Die skuur van die graafskap");
println!("Hoofstuk Nege: Die Grey Havens");
println!("BYLAE");
println!("A:");
println!("ANNALE VAN DIE KONINGS EN HEERSERS");
println!("Een: Die Númenorean Kings");
println!("(Een) Númenor");
println!("(Twee) Die ryke in ballingskap");
println!("(Drie) Eriador, Arnor en die erfgename van Isildur");
println!("(Vier) Gondor en die erfgename van Anñrion");
println!("(Vyf) Hier volg 'n deel van die verhaal van Aragorn en Arwen");
println!("Twee: DIE HUIS VAN EORL");
println!("Drie: DURIN SE VOLK");
println!("Hier volg een van die laaste notas in die Rooi Boek");
println!("B:");
println!("DIE VERHAAL VAN JARE");
println!("(CHRONOLOGIE VAN DIE WESTLAND)");
println!("The Second Age");
println!("The Third Age");
println!("C:");
println!("FAMILIEBOME");
println!("D:");
println!("KALENDERS");
println!("SHIRE KALENDER VIR GEBRUIK IN ALLE JARE");
println!("DIE KALENDERS");
println!("E:");
println!("SKRYF EN SPEL");
println!("Een: Uitspraak van woorde en name");
println!("Twee: Skryf");
println!("F:");
println!("Een: Die tale en volke van die derde eeu");
println!("Twee: Op Vertaling");
println!("INDEKSE");
println!("Een: liedere en verse");
println!("Twee: Persone, Diere en Monsters");
println!("Drie: Plekke");
println!("Vier: Dinge");
println!("----------------------------------------------");
println!("VOORWOORD");
println!("Hierdie boek is grootliks gemoeid met Hobbits, en op sy bladsye kan 'n leser baie van hul karakter en 'n bietjie van hul geskiedenis ontdek.");
println!("Verdere inligting sal ook gevind word in die keuse uit die Rooi Boek van Westmarch wat reeds gepubliseer is, onder die titel The Hobbit.");
println!("Daardie verhaal is afgelei van die vroeëre hoofstukke van die Rooi Boek, saamgestel deur Bilbo self,");
println!("die eerste Hobbit wat in die algemeen bekend geword het in die wêreld, en deur hom Daar en Terug genoem,");
println!("aangesien hulle vertel het van sy reis na die Ooste en sy terugkeer:");
println!("'n avontuur wat later al die Hobbits betrek het by die groot gebeurtenisse van daardie Tydperk wat hier verwant is.");
println!("Baie wil egter van die begin af meer oor hierdie merkwaardige mense wil weet, terwyl sommige dalk nie die vroeëre boek besit nie.");
println!("Vir sulke lesers word hier 'n paar aantekeninge oor die meer belangrike punte uit Hobbit-lore versamel, en die eerste avontuur word kortliks herroep.");
































println!("Gaan uit?");
io::stdin().read_line(&mut Exit);
}

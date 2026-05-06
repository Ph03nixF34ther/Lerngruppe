# Dezentrale und Zentrale Netze

## Zentrale Netze

// Image: Struktur Telefonnetz

Zentralisiertes Subsidiaritätsnetz
Herkunft: Militär - Bietet große Ziele


## Dezentrale Struktur

// Image: Dezentrale Struktur

Dezentrale Struktur von Rant 
Besser zu verteidigen
(Vorschlag war zunächst technologisch seiner Zeit voraus)
Durch die ARPA 


# Das ARPA-Net
## Ursprüngliches Design für das ARPA-Net

// ABB. ARPANET

- Subnetz aus IMP (**Internet Message Processors**)
- Paket mit vollständiger Zieladdresse
- Daten: Host => IMP, ggf. Zerstückelung
- 1968 Vertragsabgabe
- 1969 Host-Software

Hosts reden über ein Netz aus IMPs 

- Packet nach IMP
- IMP zerstückelt Datenpacket in 1KB Packete und sendet sie durch das IMP-System
- Ziel IMP sammelt Pakete und sendet sie weiter an den Zielhost

## Weitere Geschichte des Arpanets

=> ARPANET wächst erste 3 Jahre schnell

Versuche Drahtlos, Mobil und mit Sateliten ans ARPANET anzubinden
=> Funktioniert nicht

Vorstellung: TCP, IP
Wurde finanziell unterstützt durch ARPA


Vorstellung: BSD (Serverbetriebssystem)
Vorstellung: Berkly-Sockets mit BSD 4.2

#  Netz der National Science Foundation

- Netz, dass sich Parallel zum ARPA-Netz entwickelt hat
- Von Anfang an TCP/IP WAN
- 1990 Übergabe an private Unternehmen

# Heutige Architektur des Internets

// ABB: Architektur des Internets

Modem: Modulator, Demodulator = Umwandeln und Rückwandeln

Internetservice Provider unterhält POP (Point of Presence)

Zusammenhang der ISP (Internet-Service-Provider) nennt man Peering an sog IXP (Internet Exchange Points)

// ABB: Das Internet war mal Hierarchisch

Heute ist das Tier-1 ISP nichtmehr so wichtig.
Bsp: Netflix - Hierarchische Struktur ist teuer und langsam 
Caching auf Regional ISPs

Heute: Weniger Regional ISP mehr National und Consumer Content Provider

// ABB: Internetaufbau heute

# Internet Governance

// ABB: Internet Governance

## ICANN

- Gemeinnützige Organisation
- Multistakeholder Ansatz
- U.A. für das DNS verantwortlich
- Tochterabteilung IANA (Internet assigned Numbers Authoritity) Verwaltet IP-Adressen und Ports

## Regional Internet Registries

- Verteilen IP-Adressen (Mieten IP-Adressen bei IANA)
- Bottom-up Prozess

=> AFRINIC

## TLD-Organisationen

- Steht für Topleveldomain
- ccTLD Registries: technische Verwaltung/Betrieb länderspezifischer TLDs
- Aufgaben / Verantwortliche

## Internet Society

- Globale gemeinnützige Organisation
- Ziel: offene Entwicklung, Nutzung , Weiterentwicklung des Internets
- Mitarbeit in GNSO und TLG ICANN

## ISOC: IAB

- Internet Architecture Board

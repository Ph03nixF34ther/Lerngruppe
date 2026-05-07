Streit um TLS-Kryptografie

Ist die IETF-Standardisierung leicht zu kapern?

Gemeinschaftliches Summen, um Konsens zu messen. Was die Folklore anbelangt, schlägt die Internet Engineering Task Force jede andere Standardisierungsorganisation. Ein aktueller Streit wirft ein Schlaglicht auf die Prozesse, mit denen wichtige Standards für das Internet erarbeitet werden, und wirft die Frage auf, wie verwundbar die Verfahren sind.

![](https://www.wiso-net.de/directImage/081e03818b6be2bcfb2bf520287b146fc353fda3d5214842cc204401c1f069cc9025c165a50fed560b090ceebe92824474fe6460722b8fc423d12dd8393c92862507be2a3759b098?type=GRAPH)

Bild: Jessica Nachtigall / KI / heise medien 

c't kompakt 

- Internetstandards sind üblicherweise als RFCs (Requests for Comments) der IETF spezifiziert. 
- Die Entstehung von RFCs läuft recht speziell und sehr transparent ab. 
- Die Gefahr von Einflussnahme besteht dennoch, wie ein aktueller Streit um PQC-Verfahren hervorhebt. 

Die Internet Engineering Task Force ist der Spezialfall unter den Standardisierungsorganisationen. Sie lehnt klassische Abstimmungslösungen ab, verzichtet auf traditionelle Mitgliederstrukturen und -beiträge und bietet praktisch unbeschränkten Zugang zu allen Standardisierungsentwürfen und -dokumenten. ("We reject: kings, presidents and voting.") Grundsätzlich kann jeder technische Vorschläge sogar einfach via Mailingliste einbringen, wenn sie das "Internet besser machen".

Ein aktueller Vorschlag zur Postquantenverschlüsselung (PQC) würde das Internet allerdings keineswegs besser machen, findet Kryptoforscher Dan Bernstein, Professor an der University of Illinois in Chicago und an der Technischen Universität Eindhoven. Seit April liefert sich der bekannte Entwickler wichtiger Kryptoverfahren eine Schlacht mit den Gremien der IETF. Er hat nacheinander die Chefs der verantwortlichen Arbeitsgruppe, das Kollegium der für die Peer-Review neuer Standards verantwortlichen Internet Engineering Steering Group (IESG) und das Internet Architecture Board (IAB) angerufen.

Quantenschlüssel, hybrid oder pur 

Unverantwortlich ist für Bernstein die Bereitschaft der IETF, ein von US-Behörden bevorzugtes PQC-Verschlüsselungsverfahren ganz "ohne den Sicherheitsgurt" einer zusätzlichen klassischen Verschlüsselung als Request for Comment (RFC) zu veröffentlichen. Für den Kryptoexperten zeigt diese Bereitschaft, eine nicht-hybride Verschlüsselung zu standardisieren, dass US-Behörden, insbesondere die NSA, IETF-Standards "kaufen" können. Als hybride Verfahren bezeichnet man in diesem Kontext das Vorgehen, eine neuartige, quantencomputerresistente Verschlüsselung mit einem etablierten, klassischen Verfahren so zu kombinieren, dass Angreifer beide Verfahren brechen müssen.

Im konkreten Fall geht es um einen Vorschlag zum Einsatz des Module-Lattice-Based Key-Encapsulation Mechanism (ML-KEM) bei der TLS-Verschlüsselung, den die Kryptografin Deirdre Connolly in die Arbeitsgruppe zur Transport Layer Security (TLS WG) eingebracht hat. Connolly arbeitete in den vergangenen Jahren bei SandboxAQ, einem Vertragsnehmer von US-Behörden. Zugleich ist sie selbst eine der Vorsitzenden der TLS-Arbeitsgruppe.

Hat eine Arbeitsgruppe einen Entwurf angenommen, macht ihn sich die IETF zu eigen. Nicht zwangsläufig muss der entstehende RFC ein technischer Standard sein. Es gibt auch Informationsdokumente, "Best Current Practices", und eine Reihe anderer Dokumenttypen (siehe Kasten: "Nicht jeder RFC ist ein Standard").

Nicht jeder RFC ist ein Standard 

Nicht alle Dokumente, die eine RFC-Nummer erhalten, sind technische Standards. Neben der Internet Engineering Task Force (IETF) veröffentlichen auch ihre Forschungsschwester Internet Research Task Force (IRTF) und das Internet Architecture Board (IAB), das Fragen der Architektur des Internets beackert und die Beziehung zu anderen Standardisierungsorganisationen hält, Dokumente in der RFC-Serie. IRTF- und IAB-RFCs liefern dabei Informationen oder beschreiben Experimente. Nur Dokumente, die von einer IETF-Arbeitsgruppe zur Entwicklung angenommen, bearbeitet und im Konsens verabschiedet wurden, können als technische Standards vom RFC-Editor publiziert werden. Unterschieden wird inzwischen zwischen dem Standardvorschlag ("proposed") und dem vollwertigen Internetstandard.

Wer unbedingt eine RFC-Nummer für eine technische Idee oder Problemlösung haben will, die nicht von einer Arbeitsgruppe akzeptiert wird - oder den Diskussionsprozess dort vermeiden will -, kann den Weg über den Independent Submission Editor wählen. Diese Dokumente werden außerhalb des klassischen IETF-Standardisierungsprozesses produziert und als RFC publiziert, können aber weder technischer Standard noch Best Current Practice (BCP) der Entwickler werden. Während die IETF vielleicht im laufenden Jahr die RFC-Nummer 10000 knackt, listet sie aktuell insgesamt 101 Standards und Standardsuiten (siehe [ct.de/yv69](http://ct.de/yv69)). Nutzer der RFCs unterscheiden häufig - ob unbewusst oder bewusst - nicht zwischen den Typen.
 

ML-KEM ist einer von drei Gewinnern eines Wettbewerbes, den die US-Behörde NIST 2016 ausgelobt hatte [1]. Sie wollte damit kryptografische Verfahren finden, die auch Angriffen mit Quantencomputern standhalten. Genau genommen ist ML-KEM, das ursprünglich unter dem Namen CRYSTALS-Kyber ins Rennen ging, das einzige mittlerweile vom NIST als FIPS203 zugelassene, allgemeine Verschlüsselungsverfahren. Zwei weitere Gewinner des Wettbewerbs (CRYSTALS-Dilithium und Sphincs+/SLH-DSA) sind zur Erzeugung von Signaturen vorgesehen.

Über die Notwendigkeit quantensicherer Verschlüsselung herrscht an sich große Einigkeit: Das Bundesamt für Sicherheit in der Informationstechnik (BSI) in Bonn hat gemeinsam mit europäischen Partnerbehörden das Jahr 2030 als ersten Markstein für die Migration gesetzt. Zum Schutz vor "Store Now, Decrypt Later"-Szenarien empfiehlt es, insbesondere für "hochsensitive Anwendungen", die Migration bis dahin abzuschließen. Das BSI habe selbst hybride Varianten für eine Reihe von Protokollen, etwa OpenPGP, vorangetrieben, heißt es aus Bonn.

Auch wenn man nicht überrascht sei von Postquantum-only-Verfahren, empfehle man derzeit "den Einsatz von quantensicheren Schlüsseleinigungs- und Signaturverfahren grundsätzlich nur hybrid mit entsprechenden klassischen Verfahren", schreibt die Behörde auf Anfrage. Die neuen Algorithmen seien aktuell noch zu wenig geprüft in Bezug auf "Seitenkanalresistenz und Implementierungssicherheit", heißt es in der technischen Richtlinie BSI TR-02102-1.

Auch in der TLS-Arbeitsgruppe der IETF wird aktuell eine Kombination von ML-KEM und klassischen Verschlüsselungsalgorithmen vorangetrieben. Ende November hat der Entwurf "Post-quantum hybrid ECDHE-MLKEM Key Agreement for TLSv1.3" die für die Peer-Review in der IETF verantwortliche IESG erreicht und durchläuft gerade den IETF-weiten "Last Call" für letzte Einwände (siehe Kasten: "Vom Internet Draft zum RFC").

![](https://www.wiso-net.de/directImage/081e03818b6be2bcfb2bf520287b146fc353fda3d5214842cc204401c1f069cc9025c165a50fed560b090ceebe92824417a4e8357b2dc2092ee0fdb7fc613406b09da1b337357b0aef3b55b74b9eb555982ebe8ba6c29635?type=GRAPH)

Vom Internet Draft zum RFC 

Der Weg zum RFC steht jedem offen, zumindest in der Theorie. Allerdings ist es für große Firmen einfacher, die nötige Arbeit zu leisten. Mit der Aufnahme in den "IETF Standard Tracks"-Arbeitsprozess verlieren die Autoren das Recht, allein über Gestaltung und Änderungen an der Spezifikation zu entscheiden.

Sobald die Arbeitsgruppe einen technischen Standard finalisiert hat, reicht sie ihr Dokument an die IESG, die möglicherweise nochmals Änderungswünsche hat und auch einen IETF-weiten Last-Call aufruft. Am Ende macht der RFC-Editor die Dokumente publikationsfertig. Das Urheberrecht für alle Beiträge zur Standardisierung liegt übrigens bei der IETF.
 

Vierstufiges Beschwerdeverfahren 

Connollys zusätzlichen ML-KEM-pur-Vorschlag hätte die TLS-Arbeitsgruppe dagegen niemals annehmen dürfen, argumentiert Kryptologe Bernstein. In der heiklen Frage, ob reine PQC-Verfahren schon heute sicher genug für die Transportverschlüsselung im Internet sind, habe es keinen Konsens innerhalb der Arbeitsgruppe gegeben, sagt er. "Es gab eine Mehrheit dafür, dass die Arbeitsgruppe den Vorschlag annimmt, aber eben keinen Konsens. Dennoch haben die Chairs erklärt, wir hätten einen Konsens. Diese Entscheidung habe ich angefochten. Solange kein Konsens besteht, sollte die Arbeitsgruppe das Dokument nicht verfolgen, und das wurde ignoriert", erklärt Bernstein. Dieser Punkt stehe für ihn im Zentrum. Reaktionen der IETF-Spitze auf zusätzliche Beschwerden, die sich um die korrekte Form der Eingaben und die Frage der Transparenz ranken, nennt er lächerlich.

Nicht lustig fand Paul Wouters Bernsteins Beschwerde. Er ist Security Area Director der IETF und lehnte die an die drei Chefs der TLS-Arbeitsgruppe gerichtete Aufforderung zur Überprüfung ihrer Entscheidung ab. Auch die im nächsten Schritt von Bernstein eingeschaltete Internet Engineering Steering Group, in der die Direktoren aller Fachbereiche sitzen, blieb abwartend und reichte die Beschwerde wiederum an Wouters zurück.

In der nächsten IETF-internen Instanz rief Bernstein schließlich das Internet Architecture Board (IAB) an. Auch das konnte keinen Fehler im Verfahren erkennen, und so bleibt dem Kryptoexperten noch der Gang zum Board of Trustees der Internet Society. Die ISOC war früher das rechtliche Dach der IETF und ist immer noch einer ihrer größten Sponsoren.

Dieses mehrstufige Berufungsverfahren wird im Standardisierungsprozess der IETF immer wieder mal genutzt, denn man ist sich beileibe nicht immer einig. Direkt stattgegeben wird den Berufungen allerdings praktisch nie. "Vertraut Euren Arbeitsgruppenchefs, vertraut dem IESG" sei ein wenig zu einem Slogan geworden, bedauert einer der ältesten noch aktiven IETF-Teilnehmer, der frühere IAB-Vorsitzende John Klensin. Die Leiter der Arbeitsgruppen und die Area Directors seien längst zeitlich enorm belastet und wenig willig, abgeschlossene Prozesse der Kollegen neu aufzurollen. Generalisten mit Überblick über die wachsende Zahl immer kleinteiligerer technischer Dokumente gebe es naturgemäß immer weniger. Und auch ein Kulturwandel sei beobachtbar: Früher habe man auch mal gegen den eigenen Arbeitgeber argumentiert.

Zugleich wird allzu laute Kritik an den Verfahren gerne als Störung betrachtet. Kryptoexperte Bernstein ist praktisch die personifizierte Störung aus Sicht vieler IETF-Teilnehmer, auch wenn niemand seine Expertise infrage stellt. Dabei sei es wichtig, dass der Berufungsprozess immer mal wieder ausgetestet wird, sagt ein anderer altgedienter IETF-Teilnehmer, der aber lieber nicht namentlich genannt werden möchte.

Die Crux mit dem Konsensprinzip 

Das erklärte Ziel der IETF-Arbeit ist es, entwickelte Standards im Konsens zu verabschieden. Zwar müssen sich dafür nicht alle einig sein, nicht einmal in der jeweiligen Arbeitsgruppe. Aber im Idealfall sollen technische Einwände so diskutiert und adressiert werden, dass am Ende (möglichst) alle mit dem ausgearbeiteten Protokoll leben können.

Hier kommen die Arbeitsgruppenchefs ins Spiel. Sie entscheiden, ob "Konsens" im Saal und auf der Mailingliste besteht. Es ist eines der ehernen Prinzipien dieser "no voting"-Standardisierungsorganisation. Vor Coronazeiten wurde der Konsens gerne mittels der legendären Hums, also mittels Summens festgestellt. Durch Corona und die dabei perfektionierte virtuelle Teilnahme an den Treffen wurde das Humming schwierig. Zwar gab es den Versuch, das tönende Stimmungsbild in der Meetecho-Software abzubilden. Richtig zufrieden war man aber nie mit dem virtualisierten Summen und so verzichtet man heute darauf. Obwohl der "Hum" über die gewählte Lautstärke mehr Nuancen zwischen harten Pro- und Kontrastimmen zulässt.

Mit oder ohne Summen: Der gesuchte "Konsens" ist ein dehnbarer Begriff. In den zentralen Dokumenten zur Organisation des Arbeitsprozesses, etwa RFC 2418, ist festgehalten, dass 51 Prozent einer Arbeitsgruppe keinen "rough consensus" darstellen, 99 Prozent aber "better than rough" sind.

RFC 2418 wird derzeit wieder einmal reformiert und dabei überlegt man auch, ob man auf die Prozentzahlen nicht lieber verzichten sollte. Eventuell könnte man einfach einen 2014 von Pete Resnick entworfenen Informations-RFC zu "Humming und Rough Consensus" referenzieren, hofft etwa David Schinazi von Google.

Konsens lässt sich nicht einfach in Prozentzahlen messen, schrieb Resnick, damals noch Entwickler bei Qualcomm. Selbst wenn hundert Teilnehmer einer Arbeitsgruppe für einen Vorschlag und nur fünf dagegen sind, sei das nicht automatisch Konsens. Ebenso wie nicht automatisch _kein_ Konsens herrsche, wenn nur fünf dafür und hundert dagegen sind. Vielmehr müssten die Chefs der Arbeitsgruppe feststellen, inwieweit die technischen Bedenken der fünf Gegner im ersten Fall berücksichtigt wurden und ob im zweiten Fall vielleicht von Einzelnen versucht werde, genügend Zählkandidaten gegen einen Vorschlag zu organisieren, der eigentlich von fast allen wahrlich involvierten Teilnehmern gewünscht werde.

Letzteres nennt Resnick einen "pathologischen Fall", insbesondere wenn etwa Firmen mit tiefen Taschen Zählkandidaten mitbringen. Solche Szenarien gibt es: Die Hausmacht großer Hardwarehersteller oder anderer Big-Tech-Unternehmen haben auch Generationen von Soziologen, die die IETF untersucht haben, als Problem erkannt. Im Idealfall wirkt der Wettbewerb zwischen Unternehmen dem entgegen.

Im Fall des reinen PQC-Verfahrens für TLS 1.3 zählten die Kritiker nach der umstrittenen Entscheidung der TLS-Chefs 22 Ja- und 7 Nein-Stimmen. (Wouters hingegen zählte 23 Ja-, 6 Nein- und eine ambivalente Stimme.) Wichtiger als das genaue Verhältnis dürfte dabei im Sinn von RFC 7282 sein, dass die verschiedenen Bedenken - höheres Sicherheitsrisiko durch ungeprüften Algorithmus - aus Sicht der Gegner nicht ausdiskutiert wurden.

Die Befürworter rekrutierten sich überdies stark aus dem Umfeld von Sicherheitsbehörden. Vertreter von NSA, GCHQ, der kanadischen Cybersecurity-Behörde und des NIST sowie aus dem Kreis von Firmen, die diesen zuarbeiten, stimmten geschlossen für den Vorschlag.

Technischer Streit und "arseboxing" 

Zu den Gegnern gehört neben Bernstein auch Stephen Farrell, selbst ehemaliger Security Area Director und Security-Forscher am Trinity College in Dublin. Farrell mahnte nachdrücklich, die IETF müsse bevorzugt das Deployment der kombinierten Verschlüsselungsvarianten vorantreiben. Eine echte Risikoabwägung zwischen reinen PQC-Verfahren gegenüber Hybridvarianten sei die Arbeitsgruppe der Minderheit schuldig geblieben, findet er.

Auch einen politischen Aspekt nannte Farrell in den Diskussionen: Die IETF mache sich angreifbar, wenn sie die von einem Land bevorzugte reine PQC-Lösung zur Standardisierung annehme und dann die eines anderen Landes ablehne. "Natürlich wird es solche Vorschläge geben." Nicht ganz vergessen dürfe man übrigens die Komplizenschaft des NIST bei der Schwächung früherer Krypto-Algorithmen, erinnerte er seine Kollegen in einer E-Mail. Das NIST war Veränderungswünschen der NSA am Dual Elliptic Curve Deterministic Random Bit Generator (Dual_EC_DRBG) nachgekommen und hatte damit US-Spitzeln eine Hintertür geöffnet.

![](https://www.wiso-net.de/directImage/081e03818b6be2bcfb2bf520287b146fc353fda3d5214842a955bf3441f64db45e7fdfdf9a52ff526e6dc94bbe496339b5a70f23348de1d9cff6b2b941ac6972?type=GRAPH)

Sündenfall: Seine Empfehlung für den Dual_EC_DRBG zog das NIST zurück, er enthielt vermutlich eine Backdoor der NSA. Bild: National Institute of Standards and Technology (NIST) 

Inhaltlich, so bestätigt Farrell im Gespräch mit c't Anfang Januar, gebe er Bernstein recht. Die Anrufung der IETF-Gremien, um den US-Standard doch wieder von der Agenda nehmen zu lassen, nennt er dagegen "arseboxing" - ein umgangssprachlicher irischer Ausdruck für leeres, nicht zielführendes Gerede. Farrells eigene Reaktion war der Vorschlag eines separaten Dokuments, einer Art Handreichung zu PQC-Lösungen, in der die IETF als ersten Schritt gezielt nur hybride Lösungen empfehlen und auf Sicherheitsbedenken hinweisen solle.

Der Annahme von Farrells PQC-Handreichung widersprechen allerdings unter anderem diejenigen, die sich für das reine ML-KEM-Dokument ausgesprochen haben, etwa Autorin Deirdre Connolly.

Nicht wenige in der IETF sehen in der starken Präsenz von NSA-Vertretern und anderen Geheimdienstlern im Standardisierungsprozess ein Problem. Ein bekannter Open-Source-Entwickler nennt es ein gängiges Muster, dass Dienste wie die NSA kommerziellen Firmen Features auftragen, die letztere dann in die Arbeitsgruppen einbringen. Der Betreffende, der nicht namentlich genannt werden will, fürchtet ebenso wie Kryptoexperte Bernstein, dass aktuell diskutierte strukturelle Reformen kritische Debatten in der IETF möglicherweise stärker einschränken.

Ausreichend ausbalanciert? 

Auf Nachfrage bei der Führung der IETF, wie gut man sich gegen die Kaperung von Prozessen durch individuelle Stakeholder gewappnet sehe, gibt man sich selbstbewusst. Die Transparenz der Verfahren erschwere die gezielte Einflussnahme, ob vonseiten staatlicher Player oder großer Firmen. Zu Bernsteins laufenden Beschwerden und seinen Bedenken will man sich zugleich erst einmal nicht äußern.

Das BSI etwa lobt auf Nachfrage die "konsensbasierte Arbeitsweise", bei der "Beiträge grundsätzlich gehört und dokumentiert werden". Die frei zugänglichen Mailinglisten und Meetings stehen allen Interessierten offen, unterstreicht ein Sprecher. Das alles schaffe Transparenz. Öffentliche Standards würden überdies auch noch einer öffentlichen Bewertung außerhalb der IETF unterzogen. Das BSI schickt seit vielen Jahren Mitarbeiter zu den dreimal jährlich stattfindenden Treffen.

Auch Lars Eggert, erster deutscher IETF-Vorsitzender zwischen 2021 und 2024, hält die IETF in Bezug auf institutionelle Teilnehmer für einigermaßen ausbalanciert. "Ich sehe die TLS WG und auch die Crypto Forum Research Group (die Forschungsschwester der IETF) nicht als von der NSA übernommen. Außerdem hat die NSA zwei Seiten, Cyber und SIGINT - und die agieren oft gegensätzlich", schreibt Eggert. Zudem funktionierten die Arbeitsgruppen sehr unterschiedlich, versichert er. Von einer Arbeitsgruppe, in diesem Fall TLS, auf alle zu schließen, zeichne kein vollständiges Bild.

Die beste Verteidigung gegen schlechte Standards - Krypto oder andere - sei schlicht, eine maximal diverse und möglichst fachlich beschlagene Arbeitsgruppe zu haben, so Eggert. Eine Arbeitsgruppe, die in der Lage sei, Vorschläge gut zu analysieren, zu bewerten und auch mal Arbeiten abzulehnen, sei "schwer von einigen wenigen Bad Actors zu beeinflussen", meint er.

Dass bei der Diversität, auch in Bezug auf unterschiedliche Regionen, Altersgruppen und Geschlechter, noch einiges zu tun ist, räumt er ein. Vielleicht sollten mehr zivilgesellschaftliche Gruppen oder auch Datenschützer dem Beispiel der American Civil Liberty Union folgen. Die US-Bürgerrechtler schicken seit mehr als einem Jahrzehnt ihren eigenen "Techie" regelmäßig zur IETF, um die Themen Sicherheit und Vertraulichkeit aus Nutzersicht mit Nachdruck zu vertreten.

Literatur 

1. Wilhelm Drehling, Ding, ding. Fight!, Post-Quantum-Kryptografie: Wie es mit dem NIST-Auswahlverfahren weitergeht, c't 22/2022, S. 132
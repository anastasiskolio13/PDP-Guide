# PDP-Guide

Υλικό για τον Πανελλήνιο Διαγωνισμό Πληροφορικής (ΠΔΠ).

## Περιεχόμενα

| Φάκελος | Τι έχει |
|---|---|
| [`Presentations/`](Presentations/) | Παρουσιάσεις σε LaTeX beamer, ανά επίπεδο (`Basic`, `Junior`, `Senior`), με κοινό θέμα στο `Presentations/theme/`. Οδηγίες: [`Presentations/README.md`](Presentations/README.md) |

## Πώς δουλεύω

- Άνοιξε στο VS Code **ολόκληρο** τον φάκελο `PDP-Guide`, ώστε να ισχύουν οι κοινές ρυθμίσεις του `.vscode/`
  (XeLaTeX, λεξικό ορθογραφίας, κρυμμένα βοηθητικά αρχεία).
- Οι παρουσιάσεις γίνονται compile με **XeLaTeX** (MiKTeX ή TeX Live), μέσα στον φάκελό τους.

## Τι μπαίνει στο git

- Μπαίνουν τα `.tex`, `.cpp`, το θέμα (`theme/`) με τις εικόνες και τις γραμματοσειρές του, και τα README.
- **Δεν** μπαίνουν τα PDF και τα βοηθητικά αρχεία του LaTeX (`.aux`, `.log`, `.nav`, …): ξαναβγαίνουν με
  compile. Η λίστα είναι στο [`.gitignore`](.gitignore).
- Όλα τα αρχεία κειμένου είναι UTF-8 με τέλη γραμμών LF ([`.gitattributes`](.gitattributes)).
- Ονόματα φακέλων και αρχείων στα αγγλικά, χωρίς κενά, σε PascalCase (π.χ. `ExhaustiveSearch`).

## Υλικό τρίτων

| Αρχείο | Προέλευση |
|---|---|
| `Presentations/theme/clrscode4e.sty` | MIT Press: πακέτο ψευδοκώδικα του *Introduction to Algorithms*, 4η έκδοση (Cormen, Leiserson, Rivest, Stein) |
| `Presentations/theme/fonts/CascadiaCode-*.otf` | Microsoft Cascadia Code, άδεια SIL Open Font License 1.1 |
| `Presentations/theme/images/` | Λογότυπα ΠΔΠ, Πανεπιστημίου Δυτικής Αττικής και ΕΜΠ, ανήκουν στους φορείς τους |

Το repo είναι προς το παρόν μόνο τοπικό. Πριν γίνει δημόσιο, χρειάζεται έλεγχος των αδειών για τα παραπάνω.

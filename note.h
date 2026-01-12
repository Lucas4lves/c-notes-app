#ifndef NOTE_H
#define NOTE_H

typedef struct Note {
    int id;
    char * note;
}Note;

Note * new_note(char * content);
void add_note();
void list_all_notes();
int delete_note();
Note * prompt_note(void);
#endif
/***************************************************************
 * Name:      cppSkillsAss2Main.h
 * Purpose:   Defines Application Frame for the cppSkillsAss2 application
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   Friday, 29 November 2024 21:02:54
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:   (Specify your license here, e.g., MIT, GPL, etc.)
 **************************************************************/

#ifndef CPPMYSKEL1MAIN_H
#define CPPMYSKEL1MAIN_H

// wxWidgets headers used for GUI components
//(*Headers(cppSkillsAss2Frame)
#include <wx/colordlg.h>
#include <wx/fontdlg.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

// Definition of the main frame class for the application
class cppSkillsAss2Frame: public wxFrame
{
public:
    // Constructor and Destructor
    cppSkillsAss2Frame(wxWindow* parent, wxWindowID id = -1); // Initializes the main frame
    virtual ~cppSkillsAss2Frame();                             // Cleans up resources

    wxColourData data;  // Stores color data used for color dialog
    wxColour color;     // Represents a selected color

private:

    // Event handlers for user interactions
    //(*Handlers(cppSkillsAss2Frame)
    void OnQuit(wxCommandEvent& event);              // Handles "Quit" menu item
    void OnAbout(wxCommandEvent& event);             // Handles "About" menu item
    void OnmenChangeBkgSelected(wxCommandEvent& event);  // Changes background color
    void OnmenChgFontSelected(wxCommandEvent& event);    // Changes font style
    void OnmenShowDlgSelected(wxCommandEvent& event);
    //*)

    // Identifiers for menu items and controls
    //(*Identifiers(cppSkillsAss2Frame)
    static const long ID_MENUITEM1;
    static const long ID_SelCol;
    static const long ID_ChgFont;
    static const long idMenuQuit;
    static const long idMenuAbout;
    static const long ID_STATUSBAR1;
    //*)

    // Declarations of GUI components
    //(*Declarations(cppSkillsAss2Frame)
    wxColourDialog* ColourDialog1;
    wxFontDialog* FontDialog1;
    wxMenuItem* menChangeBkg;
    wxMenuItem* menChgFont;
    wxMenuItem* menShowDlg;
    wxStatusBar* StatusBar1;
    //*)

    DECLARE_EVENT_TABLE() // Macro for declaring the event table
};

#endif // CPPMYSKEL1MAIN_H



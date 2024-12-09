/***************************************************************
 * Name:      cppSkillsAss2App.cpp
 * Purpose:   Code for Application Class
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   Friday, 29 November 2024 21:02:54
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

/**
 * @file cppSkillsAss2App.cpp
 * @brief Implementation of the main application class for cppSkillsAss2.
 *
 * This file contains the entry point and initialization logic for the cppSkillsAss2 application.
 */

#include "cppSkillsAss2App.h"

//(*AppHeaders
#include "cppSkillsAss2Main.h"
#include <wx/image.h>
//*)

/**
 * @brief Implements the main application class.
 *
 * This macro generates the necessary code to initialize and run the application.
 */
IMPLEMENT_APP(cppSkillsAss2App);

/**
 * @brief Initializes the application.
 *
 * This function initializes all required image handlers and sets up the main frame of the application.
 *
 * @return `true` if initialization was successful; otherwise, `false`.
 */
bool cppSkillsAss2App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();  ///< Initialize all image handlers for wxWidgets.
    if ( wxsOK )
    {
        cppSkillsAss2Frame* Frame = new cppSkillsAss2Frame(0);  ///< Create the main application frame.
        Frame->Show();                                    ///< Display the main frame.
        SetTopWindow(Frame);                              ///< Set the main frame as the top window.
    }
    //*)
    return wxsOK;
}


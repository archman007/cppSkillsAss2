#ifndef DLGSKILL_H
#define DLGSKILL_H

//(*Headers(dlgSkill)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/radiobox.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class dlgSkill: public wxDialog
{
	public:

		dlgSkill(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~dlgSkill();

		//(*Declarations(dlgSkill)
		wxButton* btnCancel;
		wxButton* btnOK;
		wxRadioBox* edtSkNum;
		wxSpinCtrl* edtNumYears;
		wxStaticText* lblDetails;
		wxStaticText* lblHourRate;
		wxStaticText* lblSkill;
		wxStaticText* lblYears;
		wxTextCtrl* edtDetails;
		wxTextCtrl* edtHourly;
		wxTextCtrl* edtSkill;
		//*)

	protected:
    void OnbtnOKClick(wxCommandEvent& event);
    void OnbtnCancelClick(wxCommandEvent& event);


		//(*Identifiers(dlgSkill)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRL1;
		static const long ID_RADIOBOX1;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL3;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(dlgSkill)
//		void OnbtnOKClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

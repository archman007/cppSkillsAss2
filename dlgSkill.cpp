#include "dlgSkill.h"
#include <wx/wx.h>
#include <wx/valtext.h>  // For wxTextValidator
#include <wx/valnum.h>   // For wxIntegerValidator

class DollarValidator : public wxValidator {
public:
    DollarValidator() {}
    virtual wxObject* Clone() const override { return new DollarValidator(*this); }
    virtual bool Validate(wxWindow* parent) override {
        wxTextCtrl* ctrl = dynamic_cast<wxTextCtrl*>(GetWindow());
        if (!ctrl) return false;

        wxString value = ctrl->GetValue();
        // Validate dollar format using regex
        if (!value.Matches(wxT("^[0-9]+(\\.[0-9]{0,2})?$"))) {
            wxMessageBox("Invalid dollar amount. Format: 123.45", "Error", wxOK | wxICON_ERROR);
            return false;
        }
        return true;
    }
    virtual bool TransferToWindow() override { return true; }
    virtual bool TransferFromWindow() override { return true; }
};


//(*InternalHeaders(dlgSkill)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(dlgSkill)
const long dlgSkill::ID_STATICTEXT1 = wxNewId();
const long dlgSkill::ID_TEXTCTRL1 = wxNewId();
const long dlgSkill::ID_STATICTEXT2 = wxNewId();
const long dlgSkill::ID_SPINCTRL1 = wxNewId();
const long dlgSkill::ID_RADIOBOX1 = wxNewId();
const long dlgSkill::ID_STATICTEXT3 = wxNewId();
const long dlgSkill::ID_TEXTCTRL2 = wxNewId();
const long dlgSkill::ID_STATICTEXT4 = wxNewId();
const long dlgSkill::ID_TEXTCTRL3 = wxNewId();
const long dlgSkill::ID_BUTTON1 = wxNewId();
const long dlgSkill::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dlgSkill,wxDialog)
    //(*EventTable(dlgSkill)
    //*)
END_EVENT_TABLE()

dlgSkill::dlgSkill(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(dlgSkill)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;

    Create(parent, id, _("Enter A New Skill"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxSYSTEM_MENU|wxRESIZE_BORDER, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer3 = new wxBoxSizer(wxVERTICAL);
    lblSkill = new wxStaticText(this, ID_STATICTEXT1, _("Enter The Skill Category"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    BoxSizer3->Add(lblSkill, 0, wxALL|wxEXPAND, 2);
    edtSkill = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(303,29), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer3->Add(edtSkill, 0, wxALL|wxEXPAND, 2);
    lblYears = new wxStaticText(this, ID_STATICTEXT2, _("Number of years"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    BoxSizer3->Add(lblYears, 0, wxALL|wxEXPAND, 2);
    edtNumYears = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL1"));
    edtNumYears->SetValue(_T("0"));
    BoxSizer3->Add(edtNumYears, 0, wxALL|wxEXPAND, 2);
    wxString __wxRadioBoxChoices_1[11] =
    {
    	_("10"),
    	_("9"),
    	_("8"),
    	_("7"),
    	_("6"),
    	_("5"),
    	_("4"),
    	_("3"),
    	_("2"),
    	_("1"),
    	_("0")
    };
    edtSkNum = new wxRadioBox(this, ID_RADIOBOX1, _("Skill Level"), wxDefaultPosition, wxDefaultSize, 11, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
    BoxSizer3->Add(edtSkNum, 0, wxALL|wxEXPAND, 2);
    lblDetails = new wxStaticText(this, ID_STATICTEXT3, _("Brief Details"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    BoxSizer3->Add(lblDetails, 0, wxALL|wxEXPAND, 2);
    edtDetails = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(310,112), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    BoxSizer3->Add(edtDetails, 0, wxALL|wxEXPAND, 2);
    lblHourRate = new wxStaticText(this, ID_STATICTEXT4, _("Hourly Rate"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    BoxSizer3->Add(lblHourRate, 0, wxALL|wxEXPAND, 2);
    edtHourly = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    BoxSizer3->Add(edtHourly, 0, wxALL|wxEXPAND, 2);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    btnOK = new wxButton(this, ID_BUTTON1, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer4->Add(btnOK, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnCancel = new wxButton(this, ID_BUTTON2, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer4->Add(btnCancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dlgSkill::OnbtnOKClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dlgSkill::OnbtnCancelClick);
    //*)

    wxTextValidator stringValidator(wxFILTER_ALPHA);
    edtSkill->SetValidator(stringValidator);

    wxIntegerValidator<int> intValidator;
    intValidator.SetRange(0, 100); // Optional: Restrict range to 0-100
    edtNumYears->SetValidator(intValidator);

    edtHourly->SetValidator(DollarValidator());

}

dlgSkill::~dlgSkill()
{
    //(*Destroy(dlgSkill)
    //*)
}
void dlgSkill::OnbtnOKClick(wxCommandEvent& event)
{
    if (!Validate() || !TransferDataFromWindow())
    {
        wxMessageBox("Please correct the errors and try again.", "Validation Error", wxOK | wxICON_ERROR);
//        return;
    }
    else
    {

        wxMessageBox("All fields are valid!", "Success", wxOK | wxICON_INFORMATION);

        if (edtSkill->GetValue().ToStdString() == "")
        {
            wxMessageBox("Skill Type Is Blank", "Blank Skill Type Detected", wxOK | wxICON_INFORMATION);
        }
        else
        {
            if (edtHourly->GetValue().ToStdString() == "")
            {
                wxMessageBox("Hourly Wage Is Blank", "Blank Hourly Wage Detected", wxOK | wxICON_INFORMATION);
            }
            else
            {
                EndDialog(wxID_OK);
            }
        }
    }
}

void dlgSkill::OnbtnCancelClick(wxCommandEvent& event)
{
    Close();
}

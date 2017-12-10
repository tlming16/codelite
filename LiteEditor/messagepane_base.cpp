//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: messagepane.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "messagepane_base.h"


// Declare the bitmap loading function
extern void wxC2A73InitBitmapResources();

static bool bBitmapLoaded = false;


MessagePaneBase::MessagePaneBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC2A73InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer8 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer8);
    
    m_panel2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL|wxBORDER_SIMPLE);
    
    bSizer8->Add(m_panel2, 1, wxEXPAND, WXC_FROM_DIP(0));
    
    wxBoxSizer* mainSizer = new wxBoxSizer(wxHORIZONTAL);
    m_panel2->SetSizer(mainSizer);
    
    wxBoxSizer* bSizer81 = new wxBoxSizer(wxHORIZONTAL);
    
    mainSizer->Add(bSizer81, 1, wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    wxBoxSizer* bSizer4 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer81->Add(bSizer4, 1, wxEXPAND, WXC_FROM_DIP(5));
    
    m_bitmap1 = new wxStaticBitmap(m_panel2, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDLG_UNIT(m_panel2, wxSize(48,48)), 0 );
    
    bSizer4->Add(m_bitmap1, 0, wxALL|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_panel1 = new wxPanel(m_panel2, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel2, wxSize(-1,-1)), wxWANTS_CHARS|wxTAB_TRAVERSAL);
    
    bSizer4->Add(m_panel1, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* bSizer2 = new wxBoxSizer(wxHORIZONTAL);
    m_panel1->SetSizer(bSizer2);
    
    wxBoxSizer* bSizer3 = new wxBoxSizer(wxVERTICAL);
    
    bSizer2->Add(bSizer3, 1, wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_staticText2 = new wxStaticText(m_panel1, wxID_ANY, _("Message:"), wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1, -1)), 0);
    
    bSizer3->Add(m_staticText2, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticTextMessage = new wxStaticText(m_panel1, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1, -1)), 0);
    
    bSizer3->Add(m_staticTextMessage, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_DontAnnoyMeCheck = new wxCheckBox(m_panel1, wxID_ANY, _("Remember my answer and don't annoy me again!"), wxDefaultPosition, wxDLG_UNIT(m_panel1, wxSize(-1, -1)), 0);
    m_DontAnnoyMeCheck->SetValue(false);
    m_DontAnnoyMeCheck->SetToolTip(_("If you don't want to be spammed by this message again, tick the box. You can change your mind in Settings > Global Editor Preferences > Dialogs"));
    
    bSizer3->Add(m_DontAnnoyMeCheck, 0, wxALL, WXC_FROM_DIP(5));
    
    wxBoxSizer* bSizer7 = new wxBoxSizer(wxVERTICAL);
    
    bSizer4->Add(bSizer7, 0, wxALL, WXC_FROM_DIP(5));
    
    m_buttonClose = new wxButton(m_panel2, wxID_CANCEL, _("Hide"), wxDefaultPosition, wxDLG_UNIT(m_panel2, wxSize(-1, -1)), 0);
    
    bSizer7->Add(m_buttonClose, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_buttonAction = new wxButton(m_panel2, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel2, wxSize(-1, -1)), 0);
    m_buttonAction->SetDefault();
    
    bSizer7->Add(m_buttonAction, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_buttonAction1 = new wxButton(m_panel2, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel2, wxSize(-1, -1)), 0);
    
    bSizer7->Add(m_buttonAction1, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_buttonAction2 = new wxButton(m_panel2, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel2, wxSize(-1, -1)), 0);
    
    bSizer7->Add(m_buttonAction2, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    SetName(wxT("MessagePaneBase"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    // Connect events
    m_buttonClose->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MessagePaneBase::OnButtonClose), NULL, this);
    m_buttonAction->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MessagePaneBase::OnActionButton), NULL, this);
    m_buttonAction1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MessagePaneBase::OnActionButton1), NULL, this);
    m_buttonAction2->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MessagePaneBase::OnActionButton2), NULL, this);
    
}

MessagePaneBase::~MessagePaneBase()
{
    m_buttonClose->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MessagePaneBase::OnButtonClose), NULL, this);
    m_buttonAction->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MessagePaneBase::OnActionButton), NULL, this);
    m_buttonAction1->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MessagePaneBase::OnActionButton1), NULL, this);
    m_buttonAction2->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MessagePaneBase::OnActionButton2), NULL, this);
    
}

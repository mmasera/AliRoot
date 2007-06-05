#ifndef ALIAODHANDLER_H
#define ALIAODHANDLER_H
/* Copyright(c) 1998-2007, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice                               */

/* $Id$ */

//-------------------------------------------------------------------------
//     Implementation of the Event Handler Interface for AOD
//     Author: Andreas Morsch, CERN
//-------------------------------------------------------------------------

#include "AliVirtualEventHandler.h"

class AliAODEvent;
class TFile;
class TTree;



class AliAODHandler : public AliVirtualEventHandler {
    
 public:
    AliAODHandler();
    AliAODHandler(const char* name, const char* title);
    virtual ~AliAODHandler();
    virtual Bool_t       InitIO();
    virtual Bool_t       Fill();
    virtual Bool_t       Terminate();
    virtual Bool_t       TerminateIO();
    virtual Bool_t       Notify() {return kTRUE;}
    //
    AliAODEvent*         GetAOD()  {return fAODEvent;}
    TTree*               GetTree() {return fTreeA;}
    void                 CreateTree();
    void                 FillTree();
    void                 AddAODtoTreeUserInfo();
 private:
    AliAODHandler(const AliAODHandler&);             // Not implemented
    AliAODHandler& operator=(const AliAODHandler&);  // Not implemented
 private:
    AliAODEvent             *fAODEvent;  //! Pointer to the AOD event
    TTree                   *fTreeA;     //! tree for AOD persistency

    
    ClassDef(AliAODHandler, 1);
};

#endif

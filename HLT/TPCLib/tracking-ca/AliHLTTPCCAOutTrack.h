//-*- Mode: C++ -*-
// @(#) $Id$

//* This file is property of and copyright by the ALICE HLT Project        * 
//* ALICE Experiment at CERN, All rights reserved.                         *
//* See cxx source for full Copyright notice                               *

#ifndef ALIHLTTPCCAOUTTRACK_H
#define ALIHLTTPCCAOUTTRACK_H

#include "Rtypes.h"
#include "AliHLTTPCCATrackPar.h"

/**
 * @class AliHLTTPCCAOutTrack
 */
class AliHLTTPCCAOutTrack
{
 public:

  AliHLTTPCCAOutTrack():fFirstHitRef(0),fNHits(0),fParam(){}
  
  Int_t &NHits()               { return fNHits; }
  Int_t &FirstHitRef()         { return fFirstHitRef; }
  AliHLTTPCCATrackPar &Param() { return fParam; }

 protected:
  
  Int_t fFirstHitRef;        // index of the first hit reference in track->hit reference array
  Int_t fNHits;              // number of track hits
  AliHLTTPCCATrackPar fParam;// fitted track parameters

  ClassDef(AliHLTTPCCAOutTrack,1);
};


#endif

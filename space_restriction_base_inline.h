 
 //  Module      : space_restriction_base_inline.h
 //  Created     : 17.08.2004
 //  Modified    : 27.08.2004
 //  Author      : Dmitriy Iassenev
 //  Description : Space restriction base inline functions
 
 #pragma once
 
 IC  CSpaceRestrictionBase::CSpaceRestrictionBase        ()
 {
     m_initialized               = false;
 }
 
 IC  const xr_vector<u32> &CSpaceRestrictionBase::border ()
 {
     if (!initialized())
         initialize              ();
     VERIFY                      (initialized());
     return                      (m_border);
 }
 
 IC  void CSpaceRestrictionBase::process_borders         ()
 {
     std::sort                   (m_border.begin(),m_border.end());
     xr_vector<u32>::iterator    I = unique(m_border.begin(),m_border.end());
     m_border.erase              (I,m_border.end());
 }
 
 IC  bool CSpaceRestrictionBase::initialized             () const
 {
     return                      (m_initialized);
 }





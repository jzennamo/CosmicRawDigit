/**
 * \file OutputCollectionWires.h
 *
 * \ingroup CollectionOnly
 * 
 * \brief Class def header for a class OutputCollectionWires
 *
 * @author jzennamo
 */

/** \addtogroup CollectionOnly

    @{*/

#ifndef LARLITE_OUTPUTCOLLECTIONWIRES_H
#define LARLITE_OUTPUTCOLLECTIONWIRES_H

#include "Analysis/ana_base.h"

namespace larlite {
  /**
     \class OutputCollectionWires
     User custom analysis class made by SHELL_USER_NAME
   */
  class OutputCollectionWires : public ana_base{
  
  public:

    /// Default constructor
    OutputCollectionWires(){ _name="OutputCollectionWires"; _fout=0;}

    /// Default destructor
    virtual ~OutputCollectionWires(){}

    /** IMPLEMENT in OutputCollectionWires.cc!
        Initialization method to be called before the analysis event loop.
    */ 
    virtual bool initialize();

    /** IMPLEMENT in OutputCollectionWires.cc! 
        Analyze a data event-by-event  
    */
    virtual bool analyze(storage_manager* storage);

    /** IMPLEMENT in OutputCollectionWires.cc! 
        Finalize method to be called after all events processed.
    */
    virtual bool finalize();

  protected:
    
  };
}
#endif

//**************************************************************************
// 
// For Analysis framework documentation, read Manual.pdf here:
//
// http://microboone-docdb.fnal.gov:8080/cgi-bin/ShowDocument?docid=3183
//
//**************************************************************************

/** @} */ // end of doxygen group 

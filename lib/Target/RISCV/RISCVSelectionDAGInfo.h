//===-- ARMSelectionDAGInfo.h - ARM SelectionDAG Info -----------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file defines the ARM subclass for TargetSelectionDAGInfo.
//
//===----------------------------------------------------------------------===//

#ifndef RISCVSELECTIONDAGINFO_H
#define RISCVSELECTIONDAGINFO_H


#include "llvm/Target/TargetSelectionDAGInfo.h"

namespace llvm {

    class RISCVSelectionDAGInfo : public TargetSelectionDAGInfo {
  /// Subtarget - Keep a pointer to the RISCVSubtarget around so that we can
  /// make the right decision when generating code for different targets.
  const RISCVSubtarget *Subtarget;

public:
  explicit RISCVSelectionDAGInfo(const TargetMachine &TM);
  ~RISCVSelectionDAGInfo();

  virtual
  SDValue EmitTargetCodeForMemcpy(SelectionDAG &DAG, DebugLoc dl,
                                  SDValue Chain,
                                  SDValue Dst, SDValue Src,
                                  SDValue Size, unsigned Align,
                                  bool isVolatile, bool AlwaysInline,
                                  MachinePointerInfo DstPtrInfo,
                                  MachinePointerInfo SrcPtrInfo) const;


    };
   


    
}
#endif

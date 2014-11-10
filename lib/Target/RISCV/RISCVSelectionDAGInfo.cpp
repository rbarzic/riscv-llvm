//===-- ARMSelectionDAGInfo.cpp - ARM SelectionDAG Info -------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the RISCVSelectionDAGInfo class.
//
//===----------------------------------------------------------------------===//

// Skeleton copied from ARM version

#define DEBUG_TYPE "riscv-selectiondag-info"
#include "RISCVTargetMachine.h"
#include "RISCVSelectionDAGInfo.h"
#include "llvm/CodeGen/SelectionDAG.h"
#include "llvm/IR/DerivedTypes.h"


#include "llvm/Support/Debug.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

RISCVSelectionDAGInfo::RISCVSelectionDAGInfo(const TargetMachine &TM)
    : TargetSelectionDAGInfo(TM),
      Subtarget(&TM.getSubtarget<RISCVSubtarget>()) {
}

RISCVSelectionDAGInfo::~RISCVSelectionDAGInfo() {
}

SDValue
RISCVSelectionDAGInfo::EmitTargetCodeForMemcpy(SelectionDAG &DAG, DebugLoc dl,
                                             SDValue Chain,
                                             SDValue Dst, SDValue Src,
                                             SDValue Size, unsigned Align,
                                             bool isVolatile, bool AlwaysInline,
                                             MachinePointerInfo DstPtrInfo,
                                             MachinePointerInfo SrcPtrInfo) const {
    DEBUG(errs() << "-D- In RISCVSelectionDAGInfo::EmitTargetCodeForMemcpy\n");
    DEBUG(errs() << "-D-       Done (RISCVSelectionDAGInfo:: EmitTargetCodeForMemcpy)\n");
    return SDValue();
}







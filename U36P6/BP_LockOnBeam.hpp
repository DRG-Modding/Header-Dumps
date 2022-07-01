#ifndef UE4SS_SDK_BP_LockOnBeam_HPP
#define UE4SS_SDK_BP_LockOnBeam_HPP

class ABP_LockOnBeam_C : public ALockOnBeam
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;

    void ReceiveItemSet();
    void ExecuteUbergraph_BP_LockOnBeam(int32 EntryPoint);
};

#endif

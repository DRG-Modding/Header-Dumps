#ifndef UE4SS_SDK_AFE_FP_Stingtail_HPP
#define UE4SS_SDK_AFE_FP_Stingtail_HPP

class UAFE_FP_Stingtail_C : public UAttachMeshesAfflictionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginEffect(class UPawnAfflictionComponent* Target);
    void ExecuteUbergraph_AFE_FP_Stingtail(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_GM_Mining_HPP
#define UE4SS_SDK_GM_Mining_HPP

class AGM_Mining_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature();
    void DonkeyButtonPressed();
    void ExecuteUbergraph_GM_Mining(int32 EntryPoint);
};

#endif

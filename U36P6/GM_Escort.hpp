#ifndef UE4SS_SDK_GM_Escort_HPP
#define UE4SS_SDK_GM_Escort_HPP

class AGM_Escort_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_2_DelegateEvent__DelegateSignature();
    void DonkeyButtonPressed();
    void ExecuteUbergraph_GM_Escort(int32 EntryPoint);
};

#endif

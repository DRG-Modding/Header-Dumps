#ifndef UE4SS_SDK_GM_Elimination_HPP
#define UE4SS_SDK_GM_Elimination_HPP

class AGM_Elimination_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_2_DelegateEvent__DelegateSignature();
    void ExecuteUbergraph_GM_Elimination(int32 EntryPoint);
};

#endif

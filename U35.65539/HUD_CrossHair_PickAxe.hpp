#ifndef UE4SS_SDK_HUD_CrossHair_PickAxe_HPP
#define UE4SS_SDK_HUD_CrossHair_PickAxe_HPP

class UHUD_CrossHair_PickAxe_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    UImage* Image_1;

    void PreConstruct(bool IsDesignTime);
    void SetData(UPickaxeItem* pickAxe);
    void ActiveMiningEvent_Triggered(bool success);
    void ExecuteUbergraph_HUD_CrossHair_PickAxe(int32 EntryPoint, ActiveMiningDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UPickaxeItem* K2Node_CustomEvent_PickAxe, bool K2Node_CustomEvent_Success);
}

#endif

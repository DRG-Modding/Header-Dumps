#ifndef UE4SS_SDK_HUD_CrossHair_PickAxe_HPP
#define UE4SS_SDK_HUD_CrossHair_PickAxe_HPP

class UHUD_CrossHair_PickAxe_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UImage* Image_1;

    void PreConstruct(bool IsDesignTime);
    void SetData(class APickaxeItem* pickAxe);
    void ActiveMiningEvent_Triggered(bool success);
    void ExecuteUbergraph_HUD_CrossHair_PickAxe(int32 EntryPoint, FExecuteUbergraph_HUD_CrossHair_PickAxeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class APickaxeItem* K2Node_CustomEvent_PickAxe, bool K2Node_CustomEvent_Success);
};

#endif

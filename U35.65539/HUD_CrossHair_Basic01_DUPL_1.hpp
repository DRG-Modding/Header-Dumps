#ifndef UE4SS_SDK_HUD_CrossHair_Basic01_DUPL_1_HPP
#define UE4SS_SDK_HUD_CrossHair_Basic01_DUPL_1_HPP

class UHUD_CrossHair_Basic01_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_Basic01(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
}

#endif

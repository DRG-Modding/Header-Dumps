#ifndef UE4SS_SDK_OnScreenIndicator_Grenade_HPP
#define UE4SS_SDK_OnScreenIndicator_Grenade_HPP

class UOnScreenIndicator_Grenade_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon_Grenade;
    class UTextBlock* TEXT_Arrow;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_Grenade(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
};

#endif

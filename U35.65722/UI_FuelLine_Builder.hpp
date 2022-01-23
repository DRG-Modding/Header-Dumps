#ifndef UE4SS_SDK_UI_FuelLine_Builder_HPP
#define UE4SS_SDK_UI_FuelLine_Builder_HPP

class UUI_FuelLine_Builder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_AdvancedLabel_C* CancelLabel;
    class UProgressBar* DistanceProgress;
    class UUI_AdvancedLabel_C* FireLabel;

    void SetProgress(float InPercent, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool CallFunc_Less_FloatFloat_ReturnValue, FLinearColor K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_FuelLine_Builder(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
};

#endif

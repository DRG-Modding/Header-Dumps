#ifndef UE4SS_SDK_ITM_MutatorsAndWarnings_Entry1_HPP
#define UE4SS_SDK_ITM_MutatorsAndWarnings_Entry1_HPP

class UITM_MutatorsAndWarnings_Entry1_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_Warning;
    class UHorizontalBox* hboxMutator;
    class UImage* IconWarning;
    FLinearColor WarningTint;
    TEnumAsByte<ENUM_MutatorWarning::Type> MutatorOrWarning;

    void PreConstruct(bool IsDesignTime);
    void SetMutator(class UMissionMutator* Mutator);
    void SetWarning(class UMissionWarning* Warning);
    void SetInfo(FText Title, class UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, class UMissionMutator* K2Node_CustomEvent_Mutator, FSlateColor K2Node_MakeStruct_SlateColor, class UMissionWarning* K2Node_CustomEvent_Warning, FText K2Node_CustomEvent_Title, class UTexture2D* K2Node_CustomEvent_Icon, FLinearColor K2Node_CustomEvent_Color, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_Event_IsDesignTime);
};

#endif

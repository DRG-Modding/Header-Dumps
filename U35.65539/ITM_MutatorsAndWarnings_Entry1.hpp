#ifndef UE4SS_SDK_ITM_MutatorsAndWarnings_Entry1_HPP
#define UE4SS_SDK_ITM_MutatorsAndWarnings_Entry1_HPP

class UITM_MutatorsAndWarnings_Entry1_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_Warning;
    UHorizontalBox* hboxMutator;
    UImage* IconWarning;
    FLinearColor WarningTint;
    TEnumAsByte<ENUM_MutatorWarning::Type> MutatorOrWarning;

    void PreConstruct(bool IsDesignTime);
    void SetMutator(UMissionMutator* Mutator);
    void SetWarning(UMissionWarning* Warning);
    void SetInfo(FText Title, UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, UMissionMutator* K2Node_CustomEvent_Mutator, FSlateColor K2Node_MakeStruct_SlateColor, UMissionWarning* K2Node_CustomEvent_Warning, FText K2Node_CustomEvent_Title, UTexture2D* K2Node_CustomEvent_Icon, FLinearColor K2Node_CustomEvent_Color, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_Event_IsDesignTime);
}

#endif

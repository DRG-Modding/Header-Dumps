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
    void ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1(int32 EntryPoint);
};

#endif

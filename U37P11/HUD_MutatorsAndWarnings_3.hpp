#ifndef UE4SS_SDK_HUD_MutatorsAndWarnings_3_HPP
#define UE4SS_SDK_HUD_MutatorsAndWarnings_3_HPP

class UHUD_MutatorsAndWarnings_3_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UInvalidationBox* InvalidationBox_0;
    class UITM_MutatorsAndWarnings_Entry1_C* MutatorBP;
    class UVerticalBox* VerticalBox_MutatorsAndWarnings;
    class UITM_MutatorsAndWarnings_Entry1_C* WarningBP;
    bool WasÏtemsAdded;

    void Construct();
    void ExecuteUbergraph_HUD_MutatorsAndWarnings_3(int32 EntryPoint);
};

#endif

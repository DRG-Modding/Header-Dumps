#ifndef UE4SS_SDK_HUD_Defend_Event_HPP
#define UE4SS_SDK_HUD_Defend_Event_HPP

class UHUD_Defend_Event_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig;
    class UImage* DefenderActive_01;
    class UImage* DefenderActive_02;
    class UImage* DefenderActive_03;
    class UImage* DefenderActive_04;
    class UImage* DefenderInactive_01;
    class UImage* DefenderInactive_02;
    class UImage* DefenderInactive_03;
    class UImage* DefenderInactive_04;
    class UProgressBar* DefenseProgress;
    class UHUD_DefaultLabel_C* Failure;
    class UHUD_DefaultLabel_C* Header;
    class URetainerBox* RetainerBox_0;
    class UHUD_DefaultLabel_C* Sucess_Done;
    class UVerticalBox* VerticalBox_Complete;
    class UVerticalBox* VerticalBox_Failure;
    class UVerticalBox* VerticalBox_InProgress;
    class AEVENT_Defense_Base_C* Event;
    FLinearColor ProgressColor;
    FText HeaderText;
    TArray<class UImage*> DefenderBlocks;
    FLinearColor NoDefenderColor;
    FLinearColor HasDefenderColor;
    FText SuccesText;
    FText FailureText;

    void UpdateDefenderBlocks(int32 DefenderCount);
    void AddDefendersToArray();
    void Construct();
    void ProgressUpdated(float NewProgress);
    void PreConstruct(bool IsDesignTime);
    void success();
    void Defenders Updated(int32 DefenderCount);
    void failed();
    void ExecuteUbergraph_HUD_Defend_Event(int32 EntryPoint);
};

#endif

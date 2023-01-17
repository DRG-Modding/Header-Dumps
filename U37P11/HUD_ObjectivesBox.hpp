#ifndef UE4SS_SDK_HUD_ObjectivesBox_HPP
#define UE4SS_SDK_HUD_ObjectivesBox_HPP

class UHUD_ObjectivesBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowObjectives;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UHorizontalBox* DeepDiveBox;
    class UBasic_Label_C* DeepDiveElite;
    class UBasic_Label_C* DeepDiveStage;
    class UBasic_HUD_BracketWindowBig_Single_C* DeepDiveWindow;
    class UHUD_DefaultLabel_C* NoObjectives;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UInvalidationBox* ValidationBox;
    class UVerticalBox* VerticalBox_GameEvent;
    class UVerticalBox* VerticalBox_Optional;
    class UVerticalBox* VerticalBox_Primary;
    class UVerticalBox* VerticalBox_Secondary;
    class APlayerCharacter* Character;
    bool LaserpointerEquipped;
    class UHUDVisibilityGroup* VisibilityGroup;

    void CreateObjectiveWidget(class UObjective* Objective);
    void Construct();
    void OnObjectiveAdded(class UObjective* Objective);
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void ShowDynamically();
    void Setup Deep Dive Label();
    void OnGameEventCompletedEvent(FText GameEventName);
    void SetVisible(bool InVisible, bool animate);
    void AnimFinished();
    void OnObjectiveWidgetUpdated(class UObjectiveWidget* InObjectiveWidget);
    void OnOptionalWidgetUpdated(class UOptionalObjectiveWidget* InOptionalObjectiveWidget);
    void ExecuteUbergraph_HUD_ObjectivesBox(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_HUD_Resources_Team_HPP
#define UE4SS_SDK_HUD_Resources_Team_HPP

class UHUD_Resources_Team_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Transition;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UVerticalBox* IconParentBottom;
    class UVerticalBox* IconParentTop;
    class UBorder* SplitterBar;
    class UTextBlock* TEXT_Empty;
    class UTextBlock* TEXT_Header;
    class APlayerCharacter* Character;
    class UResourcesComponent* ResourceComponent;
    bool DoIntroAnim;
    int32 WidgetHideLock;
    bool Pinging;

    void IsObjectiveResource(class UCappedResource* InResource, bool& IsObjective, class UCappedResource*& OutResource);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Add Resource(class UCappedResource* Resource);
    void Show Widget();
    void Hide Widget();
    void Ping Widget();
    void OnTransitionFinished();
    void OnDepositingEnd_Event(class UResourceBank* ResourceBank);
    void OnDepositingBegin_Event(class UResourceBank* ResourceBank);
    void OnResourceChanged_Event(class UCappedResource* Resource, float Amount);
    void OnResourceAdded(class UCappedResource* Resource);
    void OnToggleNameplatesEvent_Event_0(bool boolValue);
    void ExecuteUbergraph_HUD_Resources_Team(int32 EntryPoint);
};

#endif

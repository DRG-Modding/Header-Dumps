#ifndef UE4SS_SDK_UI_JettyBoots_Character_HPP
#define UE4SS_SDK_UI_JettyBoots_Character_HPP

class UUI_JettyBoots_Character_C : public USpriteRectWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimSafe;
    class UWidgetAnimation* AnimDead;
    class UWidgetAnimation* AnimJetActive;
    class UImage* Character_Sprite;
    class UImage* JetBoost_Sprite;
    class UCanvasPanel* Root_Canvas;
    bool JetActive;
    bool IsDead;
    bool IsSafe;

    void CheckFSDEvents();
    void Set Safe(bool InIsSafe);
    void Set Dead(bool InIsDead);
    void SetJetActive(bool InJetActive, bool& OutValueChanged, bool& OutJetActive);
    void Construct();
    void OnEventActiveChanged_Event(const class UFSDEvent* InFsdEvent, bool InIsActive);
    void ExecuteUbergraph_UI_JettyBoots_Character(int32 EntryPoint);
};

#endif

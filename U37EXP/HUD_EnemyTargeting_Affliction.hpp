#ifndef UE4SS_SDK_HUD_EnemyTargeting_Affliction_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_Affliction_HPP

class UHUD_EnemyTargeting_Affliction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UUI_MaskedImage_C* AfflictionIcon;
    class UImage* BorderInner;
    class UImage* BorderOuter;
    class USizeBox* ImgSize;
    float Size;
    bool Active;
    class UPawnAffliction* Affliction;

    void UpdateTarget(class UPawnAfflictionComponent* InPawnAfflictions);
    void SetActive(bool Inactive);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnFadeInFinished();
    void ExecuteUbergraph_HUD_EnemyTargeting_Affliction(int32 EntryPoint);
};

#endif

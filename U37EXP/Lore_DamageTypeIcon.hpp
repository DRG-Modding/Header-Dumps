#ifndef UE4SS_SDK_Lore_DamageTypeIcon_HPP
#define UE4SS_SDK_Lore_DamageTypeIcon_HPP

class ULore_DamageTypeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UButton* Button_0;
    class UImage* Icon;
    FVector2D IconSize;
    FDamageTypeDescription DamageType;

    class UWidget* GetToolTipWidget_0();
    void Construct();
    void SetData(FDamageTypeDescription DamageType);
    void PlayIntro(float Delay);
    void ExecuteUbergraph_Lore_DamageTypeIcon(int32 EntryPoint);
};

#endif

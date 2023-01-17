#ifndef UE4SS_SDK_HUD_Armor_Base_HPP
#define UE4SS_SDK_HUD_Armor_Base_HPP

class UHUD_Armor_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class UImage* IconImage;
    class UProgressBar* ProgressBar;
    class UHealthComponent* HealthComponent;

    void ArmorChanged(float Health);
    void Bind To Health Component(class UHealthComponent* HealthComponent);
    void PreConstruct(bool IsDesignTime);
    void Unbind Health Component();
    void Set Armor Pct(float InPercent);
    void Bind To Player(class APlayerCharacter* Player);
    void ExecuteUbergraph_HUD_Armor_Base(int32 EntryPoint);
};

#endif

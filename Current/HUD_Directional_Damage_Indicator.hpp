#ifndef UE4SS_SDK_HUD_Directional_Damage_Indicator_HPP
#define UE4SS_SDK_HUD_Directional_Damage_Indicator_HPP

class UHUD_Directional_Damage_Indicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* DamageImage;
    class AActor* DamageCauser;
    FVector DamageOrigin;
    class APlayerCharacter* Character;
    float Radius;

    void UpdatePosition(float InputPin);
    void SetAngle(float Angle);
    void MoveTowards(float Value, float End, float Delta, float& Result);
    void Hit(float Damage, class AActor* DamageCauser, class APlayerCharacter* victim, class UUserWidget*& Widget);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_HUD_Directional_Damage_Indicator(int32 EntryPoint);
};

#endif

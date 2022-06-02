#ifndef UE4SS_SDK_OnScreenIndicator_Actor_Shout_HPP
#define UE4SS_SDK_OnScreenIndicator_Actor_Shout_HPP

class UOnScreenIndicator_Actor_Shout_C : public UShoutWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CharacterIcon;
    class UTextBlock* DATA_Class;
    class UTextBlock* DATA_Distance;
    class UTextBlock* DATA_Message;
    class UBasic_HUD_BracketWindowSmall_C* NormalShout;
    class URetainerBox* RetainerBox_2;
    class UWidgetSwitcher* ShoutTypeSwitcher;
    class UBorder* SubtitleShout;
    class UTextBlock* SubtitleText;
    class APlayerCharacter* Character;
    FVector2D LastPos;
    float TimeActive;
    float Opacity;
    FLinearColor BackgroundColor;
    float ShoutActive;

    void SetShoutLocation(class UUserWidget* Widget, FVector2D Position, bool OwnShout);
    void UpdateIcon();
    bool IsOwnShout();
    void Shout();
    FVector2D CalculateScreenPos();
    void InViewport(FVector2D Pos, bool& Result);
    bool IsSenderBehind(FVector& ToSender);
    void Construct();
    void Update Widget();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnShout();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_LIB_Game_HPP
#define UE4SS_SDK_LIB_Game_HPP

class ULIB_Game_C : public UBlueprintFunctionLibrary
{

    void GetMissionSeedString(class UObject* __WorldContext, FString& SeedString);
    void SetTextureAndColor(class UImage* Target, class UTexture2D* Texture, bool bMatchSize, FLinearColor InColorAndOpacity, class UObject* __WorldContext);
    void IsFlaggedVisible(class UWidget* InWidget, class UObject* __WorldContext, bool& IsFlaggedVisible);
    void SetSoftTextureAndTint(class UImage* Target, TSoftObjectPtr<UTexture2D> Texture, bool bMatchSize, FLinearColor Tint, class UObject* __WorldContext);
    void SetTextureAndTint(class UImage* Target, class UTexture2D* Texture, bool bMatchSize, FLinearColor Tint, class UObject* __WorldContext);
    void UpdateBool(bool& Variable, bool InValue, class UObject* __WorldContext, bool& ValueChanged, bool& OutValue);
    void SetVisibilityIf(class UWidget* Widget, ESlateVisibility Visibility, bool Condition, class UObject* __WorldContext, bool& IsVisible);
    void LoadMission(FSoftObjectPath NewParam, class UObject* __WorldContext);
    void SelectVisibility(class UWidget* Widget, ESlateVisibility FALSE, ESlateVisibility TRUE, bool Index, class UObject* __WorldContext, bool& IsVisible, bool& VisibilityChanged, ESlateVisibility& New Visibility);
    void IsOnSpaceRig(class UObject* __WorldContext, bool& OnSpaceRig);
    void IsKickReason(EDisconnectReason DisconnectReason, class UObject* __WorldContext, bool& Kicked);
};

#endif

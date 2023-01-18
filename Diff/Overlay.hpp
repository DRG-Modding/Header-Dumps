#ifndef UE4SS_SDK_Overlay_HPP
#define UE4SS_SDK_Overlay_HPP

struct FOverlayItem
{
    FTimespan StartTime;
    FTimespan EndTime;
    FString Text;
    FVector2D Position;

};

class UBasicOverlays : public UOverlays
{
    TArray<FOverlayItem> Overlays;

};

class ULocalizedOverlays : public UOverlays
{
    class UBasicOverlays* DefaultOverlays;
    TMap<class FString, class UBasicOverlays*> LocaleToOverlaysMap;

};

class UOverlays : public UObject
{
};

#endif

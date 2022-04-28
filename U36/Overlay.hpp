#ifndef UE4SS_SDK_Overlay_HPP
#define UE4SS_SDK_Overlay_HPP

class UOverlays : public UObject
{
};

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

#endif

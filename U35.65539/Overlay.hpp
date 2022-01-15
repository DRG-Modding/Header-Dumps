#ifndef UE4SS_SDK_Overlay_HPP
#define UE4SS_SDK_Overlay_HPP

class UOverlays : UObject
{
}

class UBasicOverlays : UOverlays
{
    TArray<FOverlayItem> Overlays;
}

class ULocalizedOverlays : UOverlays
{
    UBasicOverlays* DefaultOverlays;
    TMap<FString, UBasicOverlays*> LocaleToOverlaysMap;
}

struct UOverlayItem
{
    FTimespan StartTime;
    FTimespan EndTime;
    FString Text;
    FVector2D Position;
}

#endif

// Class Overlay.Overlays
// Size: 0x28 (Inherited: 0x28)
struct UOverlays : UObject {
};

// Class Overlay.BasicOverlays
// Size: 0x38 (Inherited: 0x28)
struct UBasicOverlays : UOverlays {
	TArray<FOverlayItem> Overlays; // 0x28(0x10)
};

// Class Overlay.LocalizedOverlays
// Size: 0x80 (Inherited: 0x28)
struct ULocalizedOverlays : UOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28(0x08)
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30(0x50)
};


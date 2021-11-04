// WidgetBlueprintGeneratedClass UI_LockOn_Crosshair.UI_LockOn_Crosshair_C
// Size: 0x259 (Inherited: 0x230)
struct UUI_LockOn_Crosshair_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimAngle; // 0x238(0x08)
	UImage* Circle; // 0x240(0x08)
	UCanvasPanel* RotationPanel; // 0x248(0x08)
	float Angle; // 0x250(0x04)
	float AngleOffset; // 0x254(0x04)
	bool ShowCircle; // 0x258(0x01)

	void SetCircleVisible(bool InVisible);
	void SetAngle(float Angle);
	void PreConstruct(bool IsDesignTime);
	void Ping(float PlaybackSpeed);
	void ExecuteUbergraph_UI_LockOn_Crosshair(int32_t EntryPoint);
};


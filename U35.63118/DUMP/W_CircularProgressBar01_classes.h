// WidgetBlueprintGeneratedClass W_CircularProgressBar01.W_CircularProgressBar01_C
// Size: 0x264 (Inherited: 0x230)
struct UW_CircularProgressBar01_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* ProgressBarImage; // 0x238(0x08)
	UTexture* Texture; // 0x240(0x08)
	float Percent; // 0x248(0x04)
	float Start Angle; // 0x24c(0x04)
	float Complete Range; // 0x250(0x04)
	float RingRadius; // 0x254(0x04)
	float RingThickness; // 0x258(0x04)
	bool Clockwise; // 0x25c(0x01)
	enum class ENUM_MenuColors Tint; // 0x25d(0x01)
	float TintOpacity; // 0x260(0x04)

	void SetTintOpacity(float TintOpacity);
	void SetTint(enum class ENUM_MenuColors Tint);
	void IncPercent(float Value, float Percent);
	void GetPercent(float Percent);
	void SetClockwise(bool ShowClockwise);
	void SetRingThickness(float Value);
	void SetRingRadius(float Value);
	void SetCompleteRange(float Value);
	void SetStartAngle(float Value);
	void CreateMaterial();
	void SetPercent(float Value);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_CircularProgressBar01(int32_t EntryPoint);
};


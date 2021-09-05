// Class CoreUObject.Object
// Size: 0x28 (Inherited: 0x00)
struct UObject {

	void ExecuteUbergraph(int32_t EntryPoint);
};

// Class CoreUObject.Interface
// Size: 0x28 (Inherited: 0x28)
struct UInterface : UObject {
};

// Class CoreUObject.Package
// Size: 0xa0 (Inherited: 0x28)
struct UPackage : UObject {
};

// Class CoreUObject.Field
// Size: 0x30 (Inherited: 0x28)
struct UField : UObject {
};

// Class CoreUObject.Struct
// Size: 0xb0 (Inherited: 0x30)
struct UStruct : UField {
};

// Class CoreUObject.Class
// Size: 0x230 (Inherited: 0xb0)
struct UClass : UStruct {
};

// Class CoreUObject.GCObjectReferencer
// Size: 0x70 (Inherited: 0x28)
struct UGCObjectReferencer : UObject {
};

// Class CoreUObject.TextBuffer
// Size: 0x50 (Inherited: 0x28)
struct UTextBuffer : UObject {
};

// Class CoreUObject.ScriptStruct
// Size: 0xc0 (Inherited: 0xb0)
struct UScriptStruct : UStruct {
};

// Class CoreUObject.Function
// Size: 0xe0 (Inherited: 0xb0)
struct UFunction : UStruct {
};

// Class CoreUObject.DelegateFunction
// Size: 0xe0 (Inherited: 0xe0)
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.SparseDelegateFunction
// Size: 0xf0 (Inherited: 0xe0)
struct USparseDelegateFunction : UDelegateFunction {
};

// Class CoreUObject.DynamicClass
// Size: 0x2b0 (Inherited: 0x230)
struct UDynamicClass : UClass {
};

// Class CoreUObject.PackageMap
// Size: 0xe0 (Inherited: 0x28)
struct UPackageMap : UObject {
};

// Class CoreUObject.Enum
// Size: 0x60 (Inherited: 0x30)
struct UEnum : UField {
};

// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x3e8 (Inherited: 0x230)
struct ULinkerPlaceholderClass : UClass {
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xf0 (Inherited: 0x28)
struct ULinkerPlaceholderExportObject : UObject {
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x298 (Inherited: 0xe0)
struct ULinkerPlaceholderFunction : UFunction {
};

// Class CoreUObject.MetaData
// Size: 0xc8 (Inherited: 0x28)
struct UMetaData : UObject {
};

// Class CoreUObject.ObjectRedirector
// Size: 0x30 (Inherited: 0x28)
struct UObjectRedirector : UObject {
};

// Class CoreUObject.Property
// Size: 0x70 (Inherited: 0x30)
struct UProperty : UField {
};

// Class CoreUObject.EnumProperty
// Size: 0x80 (Inherited: 0x70)
struct UEnumProperty : UProperty {
};

// Class CoreUObject.ArrayProperty
// Size: 0x78 (Inherited: 0x70)
struct UArrayProperty : UProperty {
};

// Class CoreUObject.ObjectPropertyBase
// Size: 0x78 (Inherited: 0x70)
struct UObjectPropertyBase : UProperty {
};

// Class CoreUObject.BoolProperty
// Size: 0x78 (Inherited: 0x70)
struct UBoolProperty : UProperty {
};

// Class CoreUObject.NumericProperty
// Size: 0x70 (Inherited: 0x70)
struct UNumericProperty : UProperty {
};

// Class CoreUObject.ByteProperty
// Size: 0x78 (Inherited: 0x70)
struct UByteProperty : UNumericProperty {
};

// Class CoreUObject.ObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
// Size: 0x80 (Inherited: 0x78)
struct UClassProperty : UObjectProperty {
};

// Class CoreUObject.DelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UDelegateProperty : UProperty {
};

// Class CoreUObject.DoubleProperty
// Size: 0x70 (Inherited: 0x70)
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
// Size: 0x70 (Inherited: 0x70)
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
// Size: 0x70 (Inherited: 0x70)
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int8Property
// Size: 0x70 (Inherited: 0x70)
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.Int16Property
// Size: 0x70 (Inherited: 0x70)
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
// Size: 0x70 (Inherited: 0x70)
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
// Size: 0x78 (Inherited: 0x70)
struct UInterfaceProperty : UProperty {
};

// Class CoreUObject.LazyObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
// Size: 0x98 (Inherited: 0x70)
struct UMapProperty : UProperty {
};

// Class CoreUObject.MulticastDelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UMulticastDelegateProperty : UProperty {
};

// Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x78 (Inherited: 0x78)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.MulticastSparseDelegateProperty
// Size: 0x78 (Inherited: 0x78)
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.NameProperty
// Size: 0x70 (Inherited: 0x70)
struct UNameProperty : UProperty {
};

// Class CoreUObject.SetProperty
// Size: 0x90 (Inherited: 0x70)
struct USetProperty : UProperty {
};

// Class CoreUObject.SoftObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct USoftObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.SoftClassProperty
// Size: 0x80 (Inherited: 0x78)
struct USoftClassProperty : USoftObjectProperty {
};

// Class CoreUObject.StrProperty
// Size: 0x70 (Inherited: 0x70)
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
// Size: 0x78 (Inherited: 0x70)
struct UStructProperty : UProperty {
};

// Class CoreUObject.UInt16Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
// Size: 0x70 (Inherited: 0x70)
struct UTextProperty : UProperty {
};

// Class CoreUObject.PropertyWrapper
// Size: 0x30 (Inherited: 0x28)
struct UPropertyWrapper : UObject {
};

// Class CoreUObject.MulticastDelegatePropertyWrapper
// Size: 0x30 (Inherited: 0x30)
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper {
};

// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size: 0x30 (Inherited: 0x30)
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper {
};


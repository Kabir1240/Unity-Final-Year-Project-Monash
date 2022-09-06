#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};

// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<Unity.VisualScripting.IGraphElement>
struct Action_1_t29D76190B51538DD0A12FCB471FA7F533D7943F7;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Unity.VisualScripting.GraphReference>>
struct Dictionary_2_t103D0AE280060A707280D1A6221B0F0DB05F988E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>>
struct Dictionary_2_tEE19ECF01E343FBED5A14E287BDE6618BC406DA3;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter>
struct Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter>
struct Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Unity.VisualScripting.EventHook,System.Boolean>
struct Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF;
// System.Func`2<Unity.VisualScripting.IGraphParentElement,System.Boolean>
struct Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE;
// System.Func`2<Unity.VisualScripting.IGraphRoot,Unity.VisualScripting.IGraphDebugData>
struct Func_2_tC5B959A6DD6FDE84607DD9ECC529B9BE485C63C5;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Single,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
// System.IComparable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IComparable_1_t076F95108CD484EA4E0CE285267FD713025180C5;
// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
// Unity.VisualScripting.IKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>
struct IKeyedCollection_2_tFC9F8D8D9B32ECC8976A2D0BB21BCB5D98CA4EBD;
// Unity.VisualScripting.IKeyedCollection`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IKeyedCollection_2_tDE9FC926FFB5ED2A3546B72DDB931B8B52FF21D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct KeyCollection_tA5A51C0A64CC4FC487C25315BEC828D08EA6BCCB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraph>
struct List_1_tE97B7994B98675F18C70DDD8DEB61E4FE5491DA1;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphData>
struct List_1_tF1785B2080B8536D64E747DAE8C2DE0D44A75E27;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphDebugData>
struct List_1_t1715D0D9950CCCC39A77E9597CA69B346CD7E3E5;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphParent>
struct List_1_tF8892BD96CF6B23CD95F24F5381A6E7237540FD1;
// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphParentElement>
struct List_1_t645DF2A1E7B0FB808EDE07ED53B8C56194AF35E6;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter>
struct List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>
struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride>
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
// Unity.VisualScripting.MergedKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>
struct MergedKeyedCollection_2_t3A426BAACF78C1FFEA721E09D9A20CB7710A2A4F;
// Unity.VisualScripting.MergedKeyedCollection`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct ValueCollection_tC846C7A49A946B31C69E32D006EC09E80202370B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>[]
struct EntryU5BU5D_tFEDE80687C5442B827987E1B460C2287A5CDFB29;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Collections.Generic.HashSet`1/Slot<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Unity.VisualScripting.FullSerializer.fsObjectProcessor[]
struct fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// Unity.VisualScripting.EnsureThat
struct EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Unity.VisualScripting.GraphPointer
struct GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B;
// Unity.VisualScripting.GraphReference
struct GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9;
// Unity.VisualScripting.GraphStack
struct GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.VisualScripting.IGettable
struct IGettable_tE51044D54DDD4C64C67B88111AF7987115C7F58E;
// Unity.VisualScripting.IGraph
struct IGraph_tBF23D8FF0B4328ED06EAA2E303A4620E57402827;
// Unity.VisualScripting.IGraphElement
struct IGraphElement_t51688AC8FCDA0752941E1BBED28FAA7668F1E3C4;
// Unity.VisualScripting.IGraphParentElement
struct IGraphParentElement_t2BB2A2916D96F1AA16D15B3693F0A6D2D4589B1D;
// Unity.VisualScripting.IGraphRoot
struct IGraphRoot_t84A87B1D402F522D84DF0B9D1FBCA3FBDEEFCC81;
// UnityEngine.UIElements.IUxmlAttributes
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2;
// UnityEngine.UIElements.UxmlTypeRestriction
struct UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92;
// Unity.VisualScripting.VariableDeclarationCollection
struct VariableDeclarationCollection_tF2FB9698489A7485BE152FDBA89ABFFE7E28C8AC;
// Unity.VisualScripting.VariableDeclarations
struct VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
// Unity.VisualScripting.FullSerializer.fsConfig
struct fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726;
// Unity.VisualScripting.FullSerializer.fsContext
struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F;
// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager
struct fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsObjectProcessor
struct fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
// Unity.VisualScripting.AttributeUtility/AttributeCache
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;
// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter
struct fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGraphParentElement_t2BB2A2916D96F1AA16D15B3693F0A6D2D4589B1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGraph_tBF23D8FF0B4328ED06EAA2E303A4620E57402827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral537F955588893B499438876FBA6FFDB5522EB027;
IL2CPP_EXTERN_C String_t* _stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E;
IL2CPP_EXTERN_C String_t* _stringLiteralA91EB6DDB7FC63B7802FA04881358EB7C92DB956;
IL2CPP_EXTERN_C String_t* _stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34;
IL2CPP_EXTERN_C String_t* _stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralF57CF18391CF4171FC992D96541EC33A4BCAB40F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnsureThat_IsNotNull_TisGraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_mAF4F418E2467D74DF2BA4E86CE18F80E89D4CB1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnsureThat_IsNotNull_TisGraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C_m5F9A438E42222566B6F34181C7C04CDF2DA154EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6EFF734E83DB234CE1396DDFC0B618A6ACA390DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE81D2669987C89E3765D51D883A7198F732D0777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAE156C7A85DA9BE875396085C1D63D8E6E72BDDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MergedKeyedCollection_2_GetEnumerator_m7C50365F1EAAB6A130A3A655847DF705378981A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mCA7EA6586E1C7C8B358B9FD1F058915BA583D905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Firestore.Internal.Util/<>c__DisplayClass5_0`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass5_0_2_t4E2767A79ECEB72018DE44DE9A31F6CB98BE76A0  : public RuntimeObject
{
	// System.Func`2<T,U> Firebase.Firestore.Internal.Util/<>c__DisplayClass5_0`2::mapFunc
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___mapFunc_0;
};

// Firebase.Firestore.Internal.Util/<>c__DisplayClass6_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass6_0_1_t19412DC1D0566C9EC4611CE883D8841EFAEB6275 : public RuntimeObject {};

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFEDE80687C5442B827987E1B460C2287A5CDFB29* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA5A51C0A64CC4FC487C25315BEC828D08EA6BCCB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC846C7A49A946B31C69E32D006EC09E80202370B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer_0;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>
struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215* ___s_emptyArray_5;
};

// Unity.VisualScripting.MergedKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>
struct MergedKeyedCollection_2_t3A426BAACF78C1FFEA721E09D9A20CB7710A2A4F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<TKey,TItem>> Unity.VisualScripting.MergedKeyedCollection`2::collections
	Dictionary_2_tEE19ECF01E343FBED5A14E287BDE6618BC406DA3* ___collections_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<TKey,TItem>> Unity.VisualScripting.MergedKeyedCollection`2::collectionsLookup
	Dictionary_2_tEE19ECF01E343FBED5A14E287BDE6618BC406DA3* ___collectionsLookup_1;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482 : public RuntimeObject {};

struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB* ___sObjectPool_7;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// Unity.VisualScripting.EnsureThat
struct EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC  : public RuntimeObject
{
	// System.String Unity.VisualScripting.EnsureThat::paramName
	String_t* ___paramName_0;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// Unity.VisualScripting.GraphPointer
struct GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B  : public RuntimeObject
{
	// Unity.VisualScripting.IGraphRoot Unity.VisualScripting.GraphPointer::<root>k__BackingField
	RuntimeObject* ___U3CrootU3Ek__BackingField_0;
	// UnityEngine.GameObject Unity.VisualScripting.GraphPointer::<gameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CgameObjectU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphParent> Unity.VisualScripting.GraphPointer::parentStack
	List_1_tF8892BD96CF6B23CD95F24F5381A6E7237540FD1* ___parentStack_2;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphParentElement> Unity.VisualScripting.GraphPointer::parentElementStack
	List_1_t645DF2A1E7B0FB808EDE07ED53B8C56194AF35E6* ___parentElementStack_3;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraph> Unity.VisualScripting.GraphPointer::graphStack
	List_1_tE97B7994B98675F18C70DDD8DEB61E4FE5491DA1* ___graphStack_4;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphData> Unity.VisualScripting.GraphPointer::dataStack
	List_1_tF1785B2080B8536D64E747DAE8C2DE0D44A75E27* ___dataStack_5;
	// System.Collections.Generic.List`1<Unity.VisualScripting.IGraphDebugData> Unity.VisualScripting.GraphPointer::debugDataStack
	List_1_t1715D0D9950CCCC39A77E9597CA69B346CD7E3E5* ___debugDataStack_6;
};

struct GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B_StaticFields
{
	// System.Func`2<Unity.VisualScripting.IGraphRoot,Unity.VisualScripting.IGraphDebugData> Unity.VisualScripting.GraphPointer::<fetchRootDebugDataBinding>k__BackingField
	Func_2_tC5B959A6DD6FDE84607DD9ECC529B9BE485C63C5* ___U3CfetchRootDebugDataBindingU3Ek__BackingField_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};

// Firebase.Firestore.Internal.Util
struct Util_tFE9150E8B46EC992A3EED07DC0DE541E0AD16C2C  : public RuntimeObject
{
};

// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2  : public RuntimeObject
{
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String[] UnityEngine.UIElements.UxmlAttributeDescription::m_ObsoleteNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ObsoleteNames_1;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_2;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<typeNamespace>k__BackingField
	String_t* ___U3CtypeNamespaceU3Ek__BackingField_3;
	// UnityEngine.UIElements.UxmlAttributeDescription/Use UnityEngine.UIElements.UxmlAttributeDescription::<use>k__BackingField
	int32_t ___U3CuseU3Ek__BackingField_4;
	// UnityEngine.UIElements.UxmlTypeRestriction UnityEngine.UIElements.UxmlAttributeDescription::<restriction>k__BackingField
	UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92* ___U3CrestrictionU3Ek__BackingField_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.VisualScripting.VariableDeclarations
struct VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405  : public RuntimeObject
{
	// Unity.VisualScripting.VariableDeclarationCollection Unity.VisualScripting.VariableDeclarations::collection
	VariableDeclarationCollection_tF2FB9698489A7485BE152FDBA89ABFFE7E28C8AC* ___collection_0;
	// System.Action Unity.VisualScripting.VariableDeclarations::OnVariableChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnVariableChanged_1;
};

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// Unity.VisualScripting.XArrayPool
struct XArrayPool_t5C7CCB5A84CD4599176EE61792ED7310E1870CBD  : public RuntimeObject
{
};

// Unity.VisualScripting.XComparable
struct XComparable_t5A6D874A51C146884F993FFD86A3C100B2B97C25  : public RuntimeObject
{
};

// Unity.VisualScripting.XEventGraph
struct XEventGraph_t0490E0C05257A3B2C4C1232797DE1C28AA82EAE9  : public RuntimeObject
{
};

// Unity.VisualScripting.XGettable
struct XGettable_t4A80C3DBD15D86067E35A0B4AB29226502EB32A6  : public RuntimeObject
{
};

// Unity.VisualScripting.XHashSetPool
struct XHashSetPool_t4C61A9709C063B10201027CAB898D989FC2C4DB4  : public RuntimeObject
{
};

// Unity.VisualScripting.XListPool
struct XListPool_t015B38DF9E0489D6554EC2AEDD84DB90A62D8D1B  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	// Unity.VisualScripting.FullSerializer.fsSerializer Unity.VisualScripting.FullSerializer.fsBaseConverter::Serializer
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer_0;
};

// Unity.VisualScripting.FullSerializer.fsContext
struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Unity.VisualScripting.FullSerializer.fsContext::_contextObjects
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____contextObjects_0;
};

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	// System.Object Unity.VisualScripting.FullSerializer.fsData::_value
	RuntimeObject* ____value_0;
};

struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::True
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::False
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::Null
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

// Unity.VisualScripting.FullSerializer.fsObjectProcessor
struct fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption
struct fsOption_t4278BEF99FB996B0A86CFD73812F3B6AE3D94E9C  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection
struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3  : public RuntimeObject
{
};

struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields
{
	// System.Type[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute> Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::_cachedAttributeQueries
	RuntimeObject* ____cachedAttributeQueries_1;
	// System.Reflection.BindingFlags Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::DeclaredFlags
	int32_t ___DeclaredFlags_2;
};

// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_availableConverters
	List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753* ____availableConverters_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_availableDirectConverters
	Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51* ____availableDirectConverters_1;
	// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor> Unity.VisualScripting.FullSerializer.fsSerializer::_processors
	List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* ____processors_2;
	// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager Unity.VisualScripting.FullSerializer.fsSerializer::_references
	fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* ____references_3;
	// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter Unity.VisualScripting.FullSerializer.fsSerializer::_lazyReferenceWriter
	fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* ____lazyReferenceWriter_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Unity.VisualScripting.FullSerializer.fsSerializer::_abstractTypeRemap
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ____abstractTypeRemap_5;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedConverterTypeInstances
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverterTypeInstances_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedConverters
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverters_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedProcessors
	Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* ____cachedProcessors_8;
	// Unity.VisualScripting.FullSerializer.fsContext Unity.VisualScripting.FullSerializer.fsSerializer::Context
	fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* ___Context_9;
	// Unity.VisualScripting.FullSerializer.fsConfig Unity.VisualScripting.FullSerializer.fsSerializer::Config
	fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___Config_10;
};

struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Unity.VisualScripting.FullSerializer.fsSerializer::_reservedKeywords
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____reservedKeywords_11;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_ObjectReference
	String_t* ___Key_ObjectReference_12;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_ObjectDefinition
	String_t* ___Key_ObjectDefinition_13;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_InstanceType
	String_t* ___Key_InstanceType_14;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_Version
	String_t* ___Key_Version_15;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_Content
	String_t* ___Key_Content_16;
};

// Unity.VisualScripting.AttributeUtility/AttributeCache
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::<inheritedAttributes>k__BackingField
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CinheritedAttributesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::<definedAttributes>k__BackingField
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CdefinedAttributesU3Ek__BackingField_1;
};

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>>
struct KeyValuePair_2_tE7175FA3A965D59F5FAB976733C3DFE9EDFDFD77 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,Unity.VisualScripting.IKeyedCollection`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_39;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.CreationContext::<target>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.CreationContext::<visualTreeAsset>k__BackingField
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.CreationContext::<slotInsertionPoints>k__BackingField
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> UnityEngine.UIElements.CreationContext::<attributeOverrides>k__BackingField
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	// UnityEngine.UIElements.CreationContext UnityEngine.UIElements.CreationContext::Default
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.VisualScripting.EventHook
struct EventHook_t1C9E2570B55940C342214BACB5E9EC889A113157 
{
	// System.String Unity.VisualScripting.EventHook::name
	String_t* ___name_0;
	// System.Object Unity.VisualScripting.EventHook::target
	RuntimeObject* ___target_1;
	// System.Object Unity.VisualScripting.EventHook::tag
	RuntimeObject* ___tag_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.EventHook
struct EventHook_t1C9E2570B55940C342214BACB5E9EC889A113157_marshaled_pinvoke
{
	char* ___name_0;
	Il2CppIUnknown* ___target_1;
	Il2CppIUnknown* ___tag_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.EventHook
struct EventHook_t1C9E2570B55940C342214BACB5E9EC889A113157_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppIUnknown* ___target_1;
	Il2CppIUnknown* ___tag_2;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// Unity.VisualScripting.GraphReference
struct GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9  : public GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B
{
	// System.Int32 Unity.VisualScripting.GraphReference::hashCode
	int32_t ___hashCode_8;
};

struct GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Unity.VisualScripting.GraphReference>> Unity.VisualScripting.GraphReference::internPool
	Dictionary_2_t103D0AE280060A707280D1A6221B0F0DB05F988E* ___internPool_9;
};

// Unity.VisualScripting.GraphStack
struct GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C  : public GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Unity.VisualScripting.MergedGraphElementCollection
struct MergedGraphElementCollection_t617900BF35465F630BAAC77AA6EAAD375D42BA4C  : public MergedKeyedCollection_2_t3A426BAACF78C1FFEA721E09D9A20CB7710A2A4F
{
	// System.Action`1<Unity.VisualScripting.IGraphElement> Unity.VisualScripting.MergedGraphElementCollection::ItemAdded
	Action_1_t29D76190B51538DD0A12FCB471FA7F533D7943F7* ___ItemAdded_2;
	// System.Action`1<Unity.VisualScripting.IGraphElement> Unity.VisualScripting.MergedGraphElementCollection::ItemRemoved
	Action_1_t29D76190B51538DD0A12FCB471FA7F533D7943F7* ___ItemRemoved_3;
	// System.Action Unity.VisualScripting.MergedGraphElementCollection::CollectionChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CollectionChanged_4;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.VisualScripting.FullSerializer.fsConverter
struct fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,Unity.VisualScripting.IKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>>
struct Enumerator_t5352D99BEDE20C42F94D3886888EF2FEB17994AD 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tEE19ECF01E343FBED5A14E287BDE6618BC406DA3* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tE7175FA3A965D59F5FAB976733C3DFE9EDFDFD77 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,Unity.VisualScripting.IKeyedCollection`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes_4;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.VisualScripting.FullSerializer.fsEnumConverter
struct fsEnumConverter_t2798C7B46A5AA11FCA5E04EFCEDEC140C9A35996  : public fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918
{
};

// Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<System.Guid,Unity.VisualScripting.IGraphElement>
struct Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2 
{
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,Unity.VisualScripting.IKeyedCollection`2<TKey,TItem>> Unity.VisualScripting.MergedKeyedCollection`2/Enumerator::collectionsEnumerator
	Enumerator_t5352D99BEDE20C42F94D3886888EF2FEB17994AD ___collectionsEnumerator_0;
	// TItem Unity.VisualScripting.MergedKeyedCollection`2/Enumerator::currentItem
	RuntimeObject* ___currentItem_1;
	// Unity.VisualScripting.IKeyedCollection`2<TKey,TItem> Unity.VisualScripting.MergedKeyedCollection`2/Enumerator::currentCollection
	RuntimeObject* ___currentCollection_2;
	// System.Int32 Unity.VisualScripting.MergedKeyedCollection`2/Enumerator::indexInCurrentCollection
	int32_t ___indexInCurrentCollection_3;
	// System.Boolean Unity.VisualScripting.MergedKeyedCollection`2/Enumerator::exceeded
	bool ___exceeded_4;
};

// Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724;

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_tCEEA1029036C146011A9093868E254F314AB661E  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.VisualScripting.EventHook,System.Boolean>
struct Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.VisualScripting.IGraphParentElement,System.Boolean>
struct Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE  : public MulticastDelegate_t
{
};

// System.Func`2<System.Threading.Tasks.Task,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.VisualScripting.EnsureThat::IsNotNull<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnsureThat_IsNotNull_TisIl2CppFullySharedGenericAny_m644606E147B32EF7D13A08EB4DB26B8FECE5495E_gshared (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) ;
// Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<TKey,TItem> Unity.VisualScripting.MergedKeyedCollection`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_GetEnumerator_mFEF9F76B008E1542EC2B5D1E07D8010D6C6A81C0_gshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m76EFF14E8539E9799A9F553CE6B88B5ECCE71ABC_gshared (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* __this, const RuntimeMethod* method) ;
// TItem Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m336ABC06C105BA0A7B0EA3C778D651377D030F78_gshared_inline (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TResult System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m730650045414250BBE9413A2AD760FBD2DD17047_gshared (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, intptr_t ___vector4s2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBagAsString(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, String_t** ___value2, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.VariableDeclarations::Get(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableDeclarations_Get_m827F12A19DC4FFEAB90ECF60CCBADD351AF138EC (VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405* __this, String_t* ___variable0, Type_t* ___expectedType1, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase,UnityEngine.UIElements.IVisualTreeUpdater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// Unity.VisualScripting.EnsureThat Unity.VisualScripting.Ensure::That(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* Ensure_That_m7D0EB3D682B0E053E207B3FD4CAED11FB417076C (String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.EnsureThat::IsNotNull<Unity.VisualScripting.GraphReference>(T)
inline void EnsureThat_IsNotNull_TisGraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_mAF4F418E2467D74DF2BA4E86CE18F80E89D4CB1A (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* __this, GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* ___value0, const RuntimeMethod* method)
{
	((  void (*) (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EnsureThat_IsNotNull_TisIl2CppFullySharedGenericAny_m644606E147B32EF7D13A08EB4DB26B8FECE5495E_gshared)((EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC*)__this, (Il2CppFullySharedGenericAny)___value0, method);
}
// Unity.VisualScripting.IGraph Unity.VisualScripting.GraphPointer::get_graph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GraphPointer_get_graph_m95F282879FBEBB7433692C40DD5C3096BC9633E0 (GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<TKey,TItem> Unity.VisualScripting.MergedKeyedCollection`2<System.Guid,Unity.VisualScripting.IGraphElement>::GetEnumerator()
inline Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2 MergedKeyedCollection_2_GetEnumerator_m7C50365F1EAAB6A130A3A655847DF705378981A0 (MergedKeyedCollection_2_t3A426BAACF78C1FFEA721E09D9A20CB7710A2A4F* __this, const RuntimeMethod* method)
{
	Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2 il2cppRetVal;
	((  void (*) (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235*, Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*, const RuntimeMethod*))MergedKeyedCollection_2_GetEnumerator_mFEF9F76B008E1542EC2B5D1E07D8010D6C6A81C0_gshared)((MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235*)__this, (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<System.Guid,Unity.VisualScripting.IGraphElement>::Dispose()
inline void Enumerator_Dispose_m6EFF734E83DB234CE1396DDFC0B618A6ACA390DE (Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*, const RuntimeMethod*))Enumerator_Dispose_m76EFF14E8539E9799A9F553CE6B88B5ECCE71ABC_gshared)((Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*)__this, method);
}
// TItem Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<System.Guid,Unity.VisualScripting.IGraphElement>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mAE156C7A85DA9BE875396085C1D63D8E6E72BDDD_inline (Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m336ABC06C105BA0A7B0EA3C778D651377D030F78_gshared_inline)((Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TResult System.Func`2<Unity.VisualScripting.EventHook,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m2AE593D361802A5561749CD1F9AC955A32598FC6_inline (Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* __this, EventHook_t1C9E2570B55940C342214BACB5E9EC889A113157 ___arg0, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, (Il2CppFullySharedGenericAny)&___arg0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TResult System.Func`2<Unity.VisualScripting.IGraphParentElement,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mCFA014C28D2693B0BDBE13370B902BE9A8617724_inline (Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, (Il2CppFullySharedGenericAny)___arg0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___value0, method);
}
// Unity.VisualScripting.GraphReference Unity.VisualScripting.GraphReference::ChildReference(Unity.VisualScripting.IGraphParentElement,System.Boolean,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* GraphReference_ChildReference_m3A719C05E8BC6EDE2EE66D092AC7D8D4C05E57DA (GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* __this, RuntimeObject* ___parentElement0, bool ___ensureValid1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___maxRecursionDepth2, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.MergedKeyedCollection`2/Enumerator<System.Guid,Unity.VisualScripting.IGraphElement>::MoveNext()
inline bool Enumerator_MoveNext_mE81D2669987C89E3765D51D883A7198F732D0777 (Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*, const RuntimeMethod*))Enumerator_MoveNext_m730650045414250BBE9413A2AD760FBD2DD17047_gshared)((Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*)__this, method);
}
// System.Void Unity.VisualScripting.EnsureThat::IsNotNull<Unity.VisualScripting.GraphStack>(T)
inline void EnsureThat_IsNotNull_TisGraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C_m5F9A438E42222566B6F34181C7C04CDF2DA154EE (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* __this, GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* ___value0, const RuntimeMethod* method)
{
	((  void (*) (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EnsureThat_IsNotNull_TisIl2CppFullySharedGenericAny_m644606E147B32EF7D13A08EB4DB26B8FECE5495E_gshared)((EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC*)__this, (Il2CppFullySharedGenericAny)___value0, method);
}
// System.Boolean Unity.VisualScripting.GraphReference::op_Equality(Unity.VisualScripting.GraphReference,Unity.VisualScripting.GraphReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphReference_op_Equality_mE0DE67752E4A7A838A162FC37F9CD7A5CCC6DFAB (GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* ___x0, GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* ___y1, const RuntimeMethod* method) ;
// Unity.VisualScripting.GraphReference Unity.VisualScripting.GraphStack::ToReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* GraphStack_ToReference_m0793568212CA2965C7D185AED3AD8D90BE34E69B (GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.GraphStack::TryEnterParentElementUnsafe(Unity.VisualScripting.IGraphParentElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphStack_TryEnterParentElementUnsafe_mB1907722A1C39EF129BAA2829D029EE2838D9865 (GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* __this, RuntimeObject* ___parentElement0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.GraphStack::ExitParentElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphStack_ExitParentElement_mB4379BEC03B4DF2D6A7674C01B9970CB98290568 (GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* __this, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.XGettable::GetValue(Unity.VisualScripting.IGettable,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XGettable_GetValue_m95F01A4D28C7B731BA306F210B79B71E528821F8 (RuntimeObject* ___gettable0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB (intptr_t ___array0, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F (intptr_t ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D (intptr_t ___localref0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, String_t* ___key0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)___value1, method);
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_Fail_m743EBD70D2E0FD9DBC9181E3F2393EB7B326E09A (String_t* ___warning0, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Type,System.Type,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, Type_t* ___storageType1, Type_t* ___overrideConverterType2, RuntimeObject** ___result3, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize(System.Type,System.Type,System.Object,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Type_t* ___storageType0, Type_t* ___overrideConverterType1, RuntimeObject* ___instance2, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data3, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::get_Succeeded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, String_t* ___key0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)___value1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___value0, method);
}
// System.Attribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* fsPortableReflection_GetAttribute_m37548D421D7B44CD0655C1B3E115119ACBA373A6 (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_mC0326C8FE1569E3468E7D097571F92CFFD81C20F (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m1591D66931F5DCA9D03C43C145DE054A439E7E8A (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>::get_Item(System.Int32)
inline fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4 (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, int32_t ___index0, const RuntimeMethod* method)
{
	fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9 (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>::get_Count()
inline int32_t List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_inline (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>::.ctor()
inline void Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6 (Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Type,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, Type_t* ___storageType1, RuntimeObject** ___result2, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize(System.Type,System.Object,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Type_t* ___storageType0, RuntimeObject* ___instance1, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data2, const RuntimeMethod* method) ;
// System.Attribute Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_m1CD217D40A4463684936A49453828BF294D2CD6F (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.AttributeUtility/AttributeCache::HasAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline)(method);
	return (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::InternalEnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisIl2CppFullySharedGenericAny_mADAA6C8E6274B90EB1C28C063666F96977E6CA48_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___enumValue0, int32_t* ___intValue1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___intValue1;
		Il2CppFullySharedGenericAny* L_1 = ___enumValue0;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m9C5EDFD70A3D351D292C6BF29C0EECBDEDCF6CF5_gshared (void* ___source0, int32_t ___index1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_m9B96B79520743C85C06FD2EF89EB76405E5716F0_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t0CF86CC2E427A2F2A260E2663885FDD5AA53F533 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t0CF86CC2E427A2F2A260E2663885FDD5AA53F533);
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), SizeOf_T_t0CF86CC2E427A2F2A260E2663885FDD5AA53F533);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t0CF86CC2E427A2F2A260E2663885FDD5AA53F533);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_m24A1FF4760612C0510B423C4A4E13BBE4801BAC5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t0CC1D76DF14D95F8EACD9DB5B55E2C5EDD000035 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t0CC1D76DF14D95F8EACD9DB5B55E2C5EDD000035;
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m84385A977356DBBC280DFCE8A8FD40607D30238F_gshared (void* ___destination0, int32_t ___index1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value2 : &___value2), SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_m74BD3588259556A716A94508AC587C4DF988D887_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF48857F3BB8786EDF8E83F41236E473C2AF9B2AA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF48857F3BB8786EDF8E83F41236E473C2AF9B2AA);
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value3 : &___value3), SizeOf_T_tF48857F3BB8786EDF8E83F41236E473C2AF9B2AA);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), L_3, SizeOf_T_tF48857F3BB8786EDF8E83F41236E473C2AF9B2AA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
// System.Threading.Tasks.Task`1<U> Firebase.Firestore.Internal.Util::MapResult<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.Tasks.Task,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Util_MapResult_TisIl2CppFullySharedGenericAny_mEB931A42BD5EEFA78276052802F7A34679C2C9AB_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___result1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(U)
	const uint32_t SizeOf_U_t7E3315D96281999F6FCEBDE4E326FE1CD412A70E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// U
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t7E3315D96281999F6FCEBDE4E326FE1CD412A70E);
	U3CU3Ec__DisplayClass6_0_1_t19412DC1D0566C9EC4611CE883D8841EFAEB6275* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_1_t19412DC1D0566C9EC4611CE883D8841EFAEB6275* L_0 = (U3CU3Ec__DisplayClass6_0_1_t19412DC1D0566C9EC4611CE883D8841EFAEB6275*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_1_t19412DC1D0566C9EC4611CE883D8841EFAEB6275* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___result1 : &___result1), SizeOf_U_t7E3315D96281999F6FCEBDE4E326FE1CD412A70E);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), L_2, SizeOf_U_t7E3315D96281999F6FCEBDE4E326FE1CD412A70E);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ___task0;
		U3CU3Ec__DisplayClass6_0_1_t19412DC1D0566C9EC4611CE883D8841EFAEB6275* L_4 = V_0;
		Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* L_5 = (Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 4));
		NullCheck(L_5);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)));
		NullCheck(L_3);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6;
		L_6 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_3, L_5);
		V_1 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_1;
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<U> Firebase.Firestore.Internal.Util::MapResult<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.Tasks.Task`1<T>,System.Func`2<T,U>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Util_MapResult_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2A028D827C3932FE7A7CA30E788F0FE6F8A6F33A_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___task0, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___mapFunc1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CU3Ec__DisplayClass5_0_2_t4E2767A79ECEB72018DE44DE9A31F6CB98BE76A0* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_2_t4E2767A79ECEB72018DE44DE9A31F6CB98BE76A0* L_0 = (U3CU3Ec__DisplayClass5_0_2_t4E2767A79ECEB72018DE44DE9A31F6CB98BE76A0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_2_t4E2767A79ECEB72018DE44DE9A31F6CB98BE76A0* L_1 = V_0;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___mapFunc1;
		NullCheck(L_1);
		L_1->___mapFunc_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___mapFunc_0), (void*)L_2);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = ___task0;
		U3CU3Ec__DisplayClass5_0_2_t4E2767A79ECEB72018DE44DE9A31F6CB98BE76A0* L_4 = V_0;
		Func_2_tCEEA1029036C146011A9093868E254F314AB661E* L_5 = (Func_2_tCEEA1029036C146011A9093868E254F314AB661E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		NullCheck(L_5);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)));
		NullCheck(L_3);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6;
		L_6 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_2_tCEEA1029036C146011A9093868E254F314AB661E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_3, L_5);
		V_1 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_1;
		return L_7;
	}
}
// T Firebase.Firestore.Internal.Util::NotNull<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util_NotNull_TisIl2CppFullySharedGenericAny_m935A3C1366AF33380EB9CF77A3C26D711DA40C9F_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, String_t* ___message1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t74A7E5CFCD8CB9E8D9A76FDD85AEBE96343FE78D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t74A7E5CFCD8CB9E8D9A76FDD85AEBE96343FE78D);
	const Il2CppFullySharedGenericAny L_1 = L_0;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t74A7E5CFCD8CB9E8D9A76FDD85AEBE96343FE78D);
	memset(V_0, 0, SizeOf_T_t74A7E5CFCD8CB9E8D9A76FDD85AEBE96343FE78D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___obj0 : &___obj0), SizeOf_T_t74A7E5CFCD8CB9E8D9A76FDD85AEBE96343FE78D);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_T_t74A7E5CFCD8CB9E8D9A76FDD85AEBE96343FE78D);
		goto IL_0005;
	}

IL_0005:
	{
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t74A7E5CFCD8CB9E8D9A76FDD85AEBE96343FE78D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t74A7E5CFCD8CB9E8D9A76FDD85AEBE96343FE78D);
		return;
	}
}
// System.Threading.Tasks.Task`1<T> Firebase.Firestore.Internal.Util::TaskFromException<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Util_TaskFromException_TisIl2CppFullySharedGenericAny_mD902674BDC2D114328017489335AB0172F1647A3_gshared (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	{
		TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* L_0 = (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_0;
		TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* L_1 = V_0;
		Exception_t* L_2 = ___exception0;
		NullCheck(L_1);
		InvokerActionInvoker1< Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, L_2);
		TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* L_3 = V_0;
		NullCheck(L_3);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4;
		L_4 = InvokerFuncInvoker0< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_3);
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(UnityEngine.MaterialPropertyBlock,System.Int32,Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisIl2CppFullySharedGenericStruct_m90D506AE8377EFD80DB587E0828EA2EC23BB330D_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___vector4s2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___vector4s2));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___vector4s2));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___props0;
		int32_t L_3 = ___name1;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = ___vector4s2;
		void* L_5;
		L_5 = InvokerFuncInvoker1< void*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_4);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___converterFunc2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___defaultValue3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	memset(V_3, 0, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_0 = ___converterFunc2;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___cc1;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___defaultValue3 : &___defaultValue3), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(V_3, L_10, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___defaultValue3 : &___defaultValue3), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(V_3, L_11, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0035:
	{
		il2cpp_codegen_memcpy(L_12, V_3, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisIl2CppFullySharedGenericAny_mCED4FA8C9BF02C7E06E00E3C378BF3E04890B72F_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___converterFunc2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___defaultValue3, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___cc1;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_4 = ___converterFunc2;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___value4;
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___defaultValue3 : &___defaultValue3), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_10, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_10);
		goto IL_0037;
	}

IL_002c:
	{
		Il2CppFullySharedGenericAny* L_11 = ___value4;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___defaultValue3 : &___defaultValue3), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, L_12, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)L_12);
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// T Unity.VisualScripting.VariableDeclarations::Get<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableDeclarations_Get_TisIl2CppFullySharedGenericAny_m42DB2F61740D838F5E23832F040DDBDA3079E42A_gshared (VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405* __this, String_t* ___variable0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tC409EDFAFB428B29D5D92712DB2DDAC181A2E8F1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tC409EDFAFB428B29D5D92712DB2DDAC181A2E8F1);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tC409EDFAFB428B29D5D92712DB2DDAC181A2E8F1);
	memset(V_0, 0, SizeOf_T_tC409EDFAFB428B29D5D92712DB2DDAC181A2E8F1);
	{
		// return (T)Get(variable, typeof(T));
		String_t* L_0 = ___variable0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		RuntimeObject* L_3;
		L_3 = VariableDeclarations_Get_m827F12A19DC4FFEAB90ECF60CCBADD351AF138EC(__this, L_0, L_2, NULL);
		void* L_5 = UnBox_Any(L_3, il2cpp_rgctx_data(method->rgctx_data, 1), L_4);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_5))), SizeOf_T_tC409EDFAFB428B29D5D92712DB2DDAC181A2E8F1);
		goto IL_001a;
	}

IL_001a:
	{
		// }
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T_tC409EDFAFB428B29D5D92712DB2DDAC181A2E8F1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_tC409EDFAFB428B29D5D92712DB2DDAC181A2E8F1);
		return;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_m79FB4427170C30BCE81E09A4E768EB13D254F711_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = InvokerFuncInvoker1< Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m6F089ED88955D9D91866E5EA2B76F3C006809BCF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___left0, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___right1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___left0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = InvokerFuncInvoker2< Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* VisualElement_StartAnimation_TisIl2CppFullySharedGenericAny_m7C5DF9BEFDC72CB1B91AA3BAFE9EBC967BAA51DD_gshared (/*UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* ___anim0, Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* ___fromValueGetter1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___to2, int32_t ___durationMs3, Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* ___onValueChanged4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8F22694D7E4107CBB0A8C6C8BD8CE34C2145FAA8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8F22694D7E4107CBB0A8C6C8BD8CE34C2145FAA8);
	ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* V_0 = NULL;
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_0 = ___anim0;
		Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* L_1 = ___fromValueGetter1;
		NullCheck(L_0);
		InvokerActionInvoker1< Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, L_1);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_2 = ___anim0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___to2 : &___to2), SizeOf_T_t8F22694D7E4107CBB0A8C6C8BD8CE34C2145FAA8);
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_3: *(void**)L_3));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_4 = ___anim0;
		int32_t L_5 = ___durationMs3;
		NullCheck(L_4);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_4, L_5);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_6 = ___anim0;
		Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* L_7 = ___onValueChanged4;
		NullCheck(L_6);
		InvokerActionInvoker1< Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_6, L_7);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_8 = ___anim0;
		NullCheck(L_8);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_8);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_9 = ___anim0;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::SetUpdater<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___phase0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)__this->___m_Panel_0;
		ConstrainedActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_1, L_5);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_8 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_9 = ___phase0;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		NullCheck(L_8);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_8, L_9, (RuntimeObject*)L_11, NULL);
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_m1BB143C73CA3A7A5B880A663FEE10E149F0F274F_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mB9B6B04771AC33604CEAD0611ADB13B54869254B_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// System.Void Unity.VisualScripting.XArrayPool::Free<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XArrayPool_Free_TisIl2CppFullySharedGenericAny_mBDE4FCE09A8A221DC0E60ADC4E23F25D94FF7F12_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// ArrayPool<T>.Free(array);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___array0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		InvokerActionInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		// }
		return;
	}
}
// T[] Unity.VisualScripting.XArrayPool::ToArrayPooled<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XArrayPool_ToArrayPooled_TisIl2CppFullySharedGenericAny_mBC8B69CE249DEB2E7262817AE6B984DA81318995_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tC003F601F7EA4A75542EB2537D7E2EE7977A6258 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tC003F601F7EA4A75542EB2537D7E2EE7977A6258);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_tC003F601F7EA4A75542EB2537D7E2EE7977A6258);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tC003F601F7EA4A75542EB2537D7E2EE7977A6258);
	memset(V_3, 0, SizeOf_T_tC003F601F7EA4A75542EB2537D7E2EE7977A6258);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	{
		// var array = ArrayPool<T>.New(source.Count());
		RuntimeObject* L_0 = ___source0;
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2;
		L_2 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_1);
		V_0 = L_2;
		// var i = 0;
		V_1 = 0;
		// foreach (var item in source)
		RuntimeObject* L_3 = ___source0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0019_1:
			{
				// foreach (var item in source)
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 6), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_memcpy(V_3, L_8, SizeOf_T_tC003F601F7EA4A75542EB2537D7E2EE7977A6258);
				// array[i++] = item;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
				int32_t L_10 = V_1;
				int32_t L_11 = L_10;
				V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
				il2cpp_codegen_memcpy(L_12, V_3, SizeOf_T_tC003F601F7EA4A75542EB2537D7E2EE7977A6258);
				NullCheck(L_9);
				il2cpp_codegen_memcpy((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_T_tC003F601F7EA4A75542EB2537D7E2EE7977A6258);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 8), (void**)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
			}

IL_002e_1:
			{
				// foreach (var item in source)
				RuntimeObject* L_13 = V_2;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// return array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		V_4 = L_15;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_4;
		return L_16;
	}
}
// System.Boolean Unity.VisualScripting.XComparable::IsEq<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IComparable`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XComparable_IsEq_TisIl2CppFullySharedGenericAny_m8BE1EC940DBA8D8F9E4BDDE01ECECA036F105365_gshared (RuntimeObject* ___x0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___y1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t2D70614F5DD6DDB3130AD3917145453D909C4A40 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t2D70614F5DD6DDB3130AD3917145453D909C4A40);
	bool V_0 = false;
	{
		// return x.CompareTo(y) == 0;
		RuntimeObject* L_0 = ___x0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___y1 : &___y1), SizeOf_T_t2D70614F5DD6DDB3130AD3917145453D909C4A40);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(0 /* System.Int32 System.IComparable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::CompareTo(T) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.VisualScripting.XComparable::IsGt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IComparable`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XComparable_IsGt_TisIl2CppFullySharedGenericAny_mEB93711D2A1E1ACC8E209F7D7A6263D1E7F5F887_gshared (RuntimeObject* ___x0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___y1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t876889DB8C8AE916A16FF5ECD488E371B0C17D36 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t876889DB8C8AE916A16FF5ECD488E371B0C17D36);
	bool V_0 = false;
	{
		// return x.CompareTo(y) > 0;
		RuntimeObject* L_0 = ___x0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___y1 : &___y1), SizeOf_T_t876889DB8C8AE916A16FF5ECD488E371B0C17D36);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(0 /* System.Int32 System.IComparable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::CompareTo(T) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.VisualScripting.XComparable::IsLt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IComparable`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XComparable_IsLt_TisIl2CppFullySharedGenericAny_m72BF2A7EEE155BC6DAA9AAE27A3BE94406BB8F44_gshared (RuntimeObject* ___x0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___y1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t67FC391973E592E7D743018BC287AFB2A2E6A10A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t67FC391973E592E7D743018BC287AFB2A2E6A10A);
	bool V_0 = false;
	{
		// return x.CompareTo(y) < 0;
		RuntimeObject* L_0 = ___x0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___y1 : &___y1), SizeOf_T_t67FC391973E592E7D743018BC287AFB2A2E6A10A);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(0 /* System.Int32 System.IComparable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::CompareTo(T) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.VisualScripting.XEventGraph::TriggerEventHandler<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.VisualScripting.GraphReference,System.Func`2<Unity.VisualScripting.EventHook,System.Boolean>,TArgs,System.Func`2<Unity.VisualScripting.IGraphParentElement,System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XEventGraph_TriggerEventHandler_TisIl2CppFullySharedGenericAny_m0FFF9D3070FC88060D54F49090EACC7A532E8EA6_gshared (GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* ___reference0, Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* ___predicate1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___args2, Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE* ___recurse3, bool ___force4, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnsureThat_IsNotNull_TisGraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_mAF4F418E2467D74DF2BA4E86CE18F80E89D4CB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6EFF734E83DB234CE1396DDFC0B618A6ACA390DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE81D2669987C89E3765D51D883A7198F732D0777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAE156C7A85DA9BE875396085C1D63D8E6E72BDDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphParentElement_t2BB2A2916D96F1AA16D15B3693F0A6D2D4589B1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraph_tBF23D8FF0B4328ED06EAA2E303A4620E57402827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MergedKeyedCollection_2_GetEnumerator_m7C50365F1EAAB6A130A3A655847DF705378981A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA91EB6DDB7FC63B7802FA04881358EB7C92DB956);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TArgs)
	const uint32_t SizeOf_TArgs_tA8BE5BBDC584F58DE9A4BF96A8802E61F993D032 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// TArgs
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TArgs_tA8BE5BBDC584F58DE9A4BF96A8802E61F993D032);
	const Il2CppFullySharedGenericAny L_36 = L_23;
	Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B18_0 = 0;
	GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* G_B21_0 = NULL;
	GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* G_B20_0 = NULL;
	{
		// Ensure.That(nameof(reference)).IsNotNull(reference);
		il2cpp_codegen_runtime_class_init_inline(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* L_0;
		L_0 = Ensure_That_m7D0EB3D682B0E053E207B3FD4CAED11FB417076C(_stringLiteralA91EB6DDB7FC63B7802FA04881358EB7C92DB956, NULL);
		GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_1 = ___reference0;
		NullCheck(L_0);
		EnsureThat_IsNotNull_TisGraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_mAF4F418E2467D74DF2BA4E86CE18F80E89D4CB1A(L_0, L_1, EnsureThat_IsNotNull_TisGraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_mAF4F418E2467D74DF2BA4E86CE18F80E89D4CB1A_RuntimeMethod_var);
		// foreach (var element in reference.graph.elements)
		GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_2 = ___reference0;
		NullCheck((GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B*)L_2);
		RuntimeObject* L_3;
		L_3 = GraphPointer_get_graph_m95F282879FBEBB7433692C40DD5C3096BC9633E0((GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B*)L_2, NULL);
		NullCheck(L_3);
		MergedGraphElementCollection_t617900BF35465F630BAAC77AA6EAAD375D42BA4C* L_4;
		L_4 = InterfaceFuncInvoker0< MergedGraphElementCollection_t617900BF35465F630BAAC77AA6EAAD375D42BA4C* >::Invoke(4 /* Unity.VisualScripting.MergedGraphElementCollection Unity.VisualScripting.IGraph::get_elements() */, IGraph_tBF23D8FF0B4328ED06EAA2E303A4620E57402827_il2cpp_TypeInfo_var, L_3);
		NullCheck((MergedKeyedCollection_2_t3A426BAACF78C1FFEA721E09D9A20CB7710A2A4F*)L_4);
		Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2 L_5;
		L_5 = MergedKeyedCollection_2_GetEnumerator_m7C50365F1EAAB6A130A3A655847DF705378981A0((MergedKeyedCollection_2_t3A426BAACF78C1FFEA721E09D9A20CB7710A2A4F*)L_4, MergedKeyedCollection_2_GetEnumerator_m7C50365F1EAAB6A130A3A655847DF705378981A0_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6EFF734E83DB234CE1396DDFC0B618A6ACA390DE((&V_0), Enumerator_Dispose_m6EFF734E83DB234CE1396DDFC0B618A6ACA390DE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b5_1;
			}

IL_0029_1:
			{
				// foreach (var element in reference.graph.elements)
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_mAE156C7A85DA9BE875396085C1D63D8E6E72BDDD_inline((&V_0), Enumerator_get_Current_mAE156C7A85DA9BE875396085C1D63D8E6E72BDDD_RuntimeMethod_var);
				V_1 = L_6;
				// if (element is IGraphEventHandler<TArgs> handler && (predicate?.Invoke(handler.GetHook(reference)) ?? true))
				RuntimeObject* L_7 = V_1;
				V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
				RuntimeObject* L_8 = V_2;
				if (!L_8)
				{
					goto IL_0051_1;
				}
			}
			{
				Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* L_9 = ___predicate1;
				if (L_9)
				{
					goto IL_0042_1;
				}
			}
			{
				G_B6_0 = 1;
				goto IL_004f_1;
			}

IL_0042_1:
			{
				Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* L_10 = ___predicate1;
				RuntimeObject* L_11 = V_2;
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_12 = ___reference0;
				NullCheck(L_11);
				EventHook_t1C9E2570B55940C342214BACB5E9EC889A113157 L_13;
				L_13 = InterfaceFuncInvoker1Invoker< EventHook_t1C9E2570B55940C342214BACB5E9EC889A113157, GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* >::Invoke(0 /* Unity.VisualScripting.EventHook Unity.VisualScripting.IGraphEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetHook(Unity.VisualScripting.GraphReference) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_11, L_12);
				NullCheck(L_10);
				bool L_14;
				L_14 = Func_2_Invoke_m2AE593D361802A5561749CD1F9AC955A32598FC6_inline(L_10, L_13, NULL);
				G_B6_0 = ((int32_t)(L_14));
			}

IL_004f_1:
			{
				G_B8_0 = G_B6_0;
				goto IL_0052_1;
			}

IL_0051_1:
			{
				G_B8_0 = 0;
			}

IL_0052_1:
			{
				V_4 = (bool)G_B8_0;
				bool L_15 = V_4;
				if (!L_15)
				{
					goto IL_0079_1;
				}
			}
			{
				// if (force || handler.IsListening(reference))
				bool L_16 = ___force4;
				if (L_16)
				{
					goto IL_0066_1;
				}
			}
			{
				RuntimeObject* L_17 = V_2;
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_18 = ___reference0;
				NullCheck(L_17);
				bool L_19;
				L_19 = InterfaceFuncInvoker1Invoker< bool, GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B* >::Invoke(2 /* System.Boolean Unity.VisualScripting.IGraphEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::IsListening(Unity.VisualScripting.GraphPointer) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_17, (GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B*)L_18);
				G_B12_0 = ((int32_t)(L_19));
				goto IL_0067_1;
			}

IL_0066_1:
			{
				G_B12_0 = 1;
			}

IL_0067_1:
			{
				V_5 = (bool)G_B12_0;
				bool L_20 = V_5;
				if (!L_20)
				{
					goto IL_0078_1;
				}
			}
			{
				// handler.Trigger(reference, args);
				RuntimeObject* L_21 = V_2;
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_22 = ___reference0;
				il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___args2 : &___args2), SizeOf_TArgs_tA8BE5BBDC584F58DE9A4BF96A8802E61F993D032);
				NullCheck(L_21);
				InterfaceActionInvoker2Invoker< GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9*, Il2CppFullySharedGenericAny >::Invoke(1 /* System.Void Unity.VisualScripting.IGraphEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Trigger(Unity.VisualScripting.GraphReference,TArgs) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_21, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_23: *(void**)L_23));
			}

IL_0078_1:
			{
			}

IL_0079_1:
			{
				// if (element is IGraphParentElement parentElement && recurse(parentElement))
				RuntimeObject* L_24 = V_1;
				V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IGraphParentElement_t2BB2A2916D96F1AA16D15B3693F0A6D2D4589B1D_il2cpp_TypeInfo_var));
				RuntimeObject* L_25 = V_3;
				if (!L_25)
				{
					goto IL_008c_1;
				}
			}
			{
				Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE* L_26 = ___recurse3;
				RuntimeObject* L_27 = V_3;
				NullCheck(L_26);
				bool L_28;
				L_28 = Func_2_Invoke_mCFA014C28D2693B0BDBE13370B902BE9A8617724_inline(L_26, L_27, NULL);
				G_B18_0 = ((int32_t)(L_28));
				goto IL_008d_1;
			}

IL_008c_1:
			{
				G_B18_0 = 0;
			}

IL_008d_1:
			{
				V_6 = (bool)G_B18_0;
				bool L_29 = V_6;
				if (!L_29)
				{
					goto IL_00b4_1;
				}
			}
			{
				// reference.ChildReference(parentElement, false, 0)?.TriggerEventHandler(predicate, args, recurse, force);
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_30 = ___reference0;
				RuntimeObject* L_31 = V_3;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_32;
				memset((&L_32), 0, sizeof(L_32));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_32), 0, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				NullCheck(L_30);
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_33;
				L_33 = GraphReference_ChildReference_m3A719C05E8BC6EDE2EE66D092AC7D8D4C05E57DA(L_30, L_31, (bool)0, L_32, NULL);
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_34 = L_33;
				G_B20_0 = L_34;
				if (L_34)
				{
					G_B21_0 = L_34;
					goto IL_00a8_1;
				}
			}
			{
				goto IL_00b3_1;
			}

IL_00a8_1:
			{
				Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* L_35 = ___predicate1;
				il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___args2 : &___args2), SizeOf_TArgs_tA8BE5BBDC584F58DE9A4BF96A8802E61F993D032);
				Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE* L_37 = ___recurse3;
				bool L_38 = ___force4;
				InvokerActionInvoker5< GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9*, Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF*, Il2CppFullySharedGenericAny, Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, G_B21_0, L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_36: *(void**)L_36), L_37, L_38);
			}

IL_00b3_1:
			{
			}

IL_00b4_1:
			{
			}

IL_00b5_1:
			{
				// foreach (var element in reference.graph.elements)
				bool L_39;
				L_39 = Enumerator_MoveNext_mE81D2669987C89E3765D51D883A7198F732D0777((&V_0), Enumerator_MoveNext_mE81D2669987C89E3765D51D883A7198F732D0777_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_00d2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.XEventGraph::TriggerEventHandler<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.VisualScripting.GraphStack,System.Func`2<Unity.VisualScripting.EventHook,System.Boolean>,TArgs,System.Func`2<Unity.VisualScripting.IGraphParentElement,System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XEventGraph_TriggerEventHandler_TisIl2CppFullySharedGenericAny_m6ED593421AC7EC6CAB8675A170F5F05F5F08BBF1_gshared (GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* ___stack0, Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* ___predicate1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___args2, Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE* ___recurse3, bool ___force4, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnsureThat_IsNotNull_TisGraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C_m5F9A438E42222566B6F34181C7C04CDF2DA154EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6EFF734E83DB234CE1396DDFC0B618A6ACA390DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE81D2669987C89E3765D51D883A7198F732D0777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAE156C7A85DA9BE875396085C1D63D8E6E72BDDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphParentElement_t2BB2A2916D96F1AA16D15B3693F0A6D2D4589B1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraph_tBF23D8FF0B4328ED06EAA2E303A4620E57402827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MergedKeyedCollection_2_GetEnumerator_m7C50365F1EAAB6A130A3A655847DF705378981A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF57CF18391CF4171FC992D96541EC33A4BCAB40F);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TArgs)
	const uint32_t SizeOf_TArgs_t08A749FB745818A6F5D3CC8B8F3A25239BC3C4E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// TArgs
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TArgs_t08A749FB745818A6F5D3CC8B8F3A25239BC3C4E5);
	const Il2CppFullySharedGenericAny L_42 = L_29;
	GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* V_0 = NULL;
	Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B19_0 = 0;
	{
		// Ensure.That(nameof(stack)).IsNotNull(stack);
		il2cpp_codegen_runtime_class_init_inline(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* L_0;
		L_0 = Ensure_That_m7D0EB3D682B0E053E207B3FD4CAED11FB417076C(_stringLiteralF57CF18391CF4171FC992D96541EC33A4BCAB40F, NULL);
		GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* L_1 = ___stack0;
		NullCheck(L_0);
		EnsureThat_IsNotNull_TisGraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C_m5F9A438E42222566B6F34181C7C04CDF2DA154EE(L_0, L_1, EnsureThat_IsNotNull_TisGraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C_m5F9A438E42222566B6F34181C7C04CDF2DA154EE_RuntimeMethod_var);
		// GraphReference reference = null;
		V_0 = (GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9*)NULL;
		// foreach (var element in stack.graph.elements)
		GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* L_2 = ___stack0;
		NullCheck((GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B*)L_2);
		RuntimeObject* L_3;
		L_3 = GraphPointer_get_graph_m95F282879FBEBB7433692C40DD5C3096BC9633E0((GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B*)L_2, NULL);
		NullCheck(L_3);
		MergedGraphElementCollection_t617900BF35465F630BAAC77AA6EAAD375D42BA4C* L_4;
		L_4 = InterfaceFuncInvoker0< MergedGraphElementCollection_t617900BF35465F630BAAC77AA6EAAD375D42BA4C* >::Invoke(4 /* Unity.VisualScripting.MergedGraphElementCollection Unity.VisualScripting.IGraph::get_elements() */, IGraph_tBF23D8FF0B4328ED06EAA2E303A4620E57402827_il2cpp_TypeInfo_var, L_3);
		NullCheck((MergedKeyedCollection_2_t3A426BAACF78C1FFEA721E09D9A20CB7710A2A4F*)L_4);
		Enumerator_tCF24C92BF0D514AFD9491A04D030CB06F8122FC2 L_5;
		L_5 = MergedKeyedCollection_2_GetEnumerator_m7C50365F1EAAB6A130A3A655847DF705378981A0((MergedKeyedCollection_2_t3A426BAACF78C1FFEA721E09D9A20CB7710A2A4F*)L_4, MergedKeyedCollection_2_GetEnumerator_m7C50365F1EAAB6A130A3A655847DF705378981A0_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6EFF734E83DB234CE1396DDFC0B618A6ACA390DE((&V_1), Enumerator_Dispose_m6EFF734E83DB234CE1396DDFC0B618A6ACA390DE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_002b_1:
			{
				// foreach (var element in stack.graph.elements)
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_mAE156C7A85DA9BE875396085C1D63D8E6E72BDDD_inline((&V_1), Enumerator_get_Current_mAE156C7A85DA9BE875396085C1D63D8E6E72BDDD_RuntimeMethod_var);
				V_2 = L_6;
				// if (element is IGraphEventHandler<TArgs> handler)
				RuntimeObject* L_7 = V_2;
				V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
				RuntimeObject* L_8 = V_3;
				V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_9 = V_5;
				if (!L_9)
				{
					goto IL_0097_1;
				}
			}
			{
				// if (reference == null)
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_10 = V_0;
				il2cpp_codegen_runtime_class_init_inline(GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = GraphReference_op_Equality_mE0DE67752E4A7A838A162FC37F9CD7A5CCC6DFAB(L_10, (GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9*)NULL, NULL);
				V_6 = L_11;
				bool L_12 = V_6;
				if (!L_12)
				{
					goto IL_005c_1;
				}
			}
			{
				// reference = stack.ToReference();
				GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* L_13 = ___stack0;
				NullCheck(L_13);
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_14;
				L_14 = GraphStack_ToReference_m0793568212CA2965C7D185AED3AD8D90BE34E69B(L_13, NULL);
				V_0 = L_14;
			}

IL_005c_1:
			{
				// if (predicate == null || predicate.Invoke(handler.GetHook(reference)))
				Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* L_15 = ___predicate1;
				if (!L_15)
				{
					goto IL_006e_1;
				}
			}
			{
				Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* L_16 = ___predicate1;
				RuntimeObject* L_17 = V_3;
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_18 = V_0;
				NullCheck(L_17);
				EventHook_t1C9E2570B55940C342214BACB5E9EC889A113157 L_19;
				L_19 = InterfaceFuncInvoker1Invoker< EventHook_t1C9E2570B55940C342214BACB5E9EC889A113157, GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* >::Invoke(0 /* Unity.VisualScripting.EventHook Unity.VisualScripting.IGraphEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetHook(Unity.VisualScripting.GraphReference) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_17, L_18);
				NullCheck(L_16);
				bool L_20;
				L_20 = Func_2_Invoke_m2AE593D361802A5561749CD1F9AC955A32598FC6_inline(L_16, L_19, NULL);
				G_B8_0 = ((int32_t)(L_20));
				goto IL_006f_1;
			}

IL_006e_1:
			{
				G_B8_0 = 1;
			}

IL_006f_1:
			{
				V_7 = (bool)G_B8_0;
				bool L_21 = V_7;
				if (!L_21)
				{
					goto IL_0096_1;
				}
			}
			{
				// if (force || handler.IsListening(reference))
				bool L_22 = ___force4;
				if (L_22)
				{
					goto IL_0083_1;
				}
			}
			{
				RuntimeObject* L_23 = V_3;
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_24 = V_0;
				NullCheck(L_23);
				bool L_25;
				L_25 = InterfaceFuncInvoker1Invoker< bool, GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B* >::Invoke(2 /* System.Boolean Unity.VisualScripting.IGraphEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::IsListening(Unity.VisualScripting.GraphPointer) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_23, (GraphPointer_t01C98F06D1A7635CB867665044B7DC1FE03D1C0B*)L_24);
				G_B12_0 = ((int32_t)(L_25));
				goto IL_0084_1;
			}

IL_0083_1:
			{
				G_B12_0 = 1;
			}

IL_0084_1:
			{
				V_8 = (bool)G_B12_0;
				bool L_26 = V_8;
				if (!L_26)
				{
					goto IL_0095_1;
				}
			}
			{
				// handler.Trigger(reference, args);
				RuntimeObject* L_27 = V_3;
				GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* L_28 = V_0;
				il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___args2 : &___args2), SizeOf_TArgs_t08A749FB745818A6F5D3CC8B8F3A25239BC3C4E5);
				NullCheck(L_27);
				InterfaceActionInvoker2Invoker< GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9*, Il2CppFullySharedGenericAny >::Invoke(1 /* System.Void Unity.VisualScripting.IGraphEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Trigger(Unity.VisualScripting.GraphReference,TArgs) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_27, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_29: *(void**)L_29));
			}

IL_0095_1:
			{
			}

IL_0096_1:
			{
			}

IL_0097_1:
			{
				// if (element is IGraphParentElement parentElement && recurse(parentElement))
				RuntimeObject* L_30 = V_2;
				V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, IGraphParentElement_t2BB2A2916D96F1AA16D15B3693F0A6D2D4589B1D_il2cpp_TypeInfo_var));
				RuntimeObject* L_31 = V_4;
				if (!L_31)
				{
					goto IL_00ad_1;
				}
			}
			{
				Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE* L_32 = ___recurse3;
				RuntimeObject* L_33 = V_4;
				NullCheck(L_32);
				bool L_34;
				L_34 = Func_2_Invoke_mCFA014C28D2693B0BDBE13370B902BE9A8617724_inline(L_32, L_33, NULL);
				G_B19_0 = ((int32_t)(L_34));
				goto IL_00ae_1;
			}

IL_00ad_1:
			{
				G_B19_0 = 0;
			}

IL_00ae_1:
			{
				V_9 = (bool)G_B19_0;
				bool L_35 = V_9;
				if (!L_35)
				{
					goto IL_00d9_1;
				}
			}
			{
				// if (stack.TryEnterParentElementUnsafe(parentElement))
				GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* L_36 = ___stack0;
				RuntimeObject* L_37 = V_4;
				NullCheck(L_36);
				bool L_38;
				L_38 = GraphStack_TryEnterParentElementUnsafe_mB1907722A1C39EF129BAA2829D029EE2838D9865(L_36, L_37, NULL);
				V_10 = L_38;
				bool L_39 = V_10;
				if (!L_39)
				{
					goto IL_00d8_1;
				}
			}
			{
				// stack.TriggerEventHandler(predicate, args, recurse, force);
				GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* L_40 = ___stack0;
				Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF* L_41 = ___predicate1;
				il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___args2 : &___args2), SizeOf_TArgs_t08A749FB745818A6F5D3CC8B8F3A25239BC3C4E5);
				Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE* L_43 = ___recurse3;
				bool L_44 = ___force4;
				InvokerActionInvoker5< GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C*, Func_2_tAF55076662A6FF164DF890818D0B9570331AC1EF*, Il2CppFullySharedGenericAny, Func_2_tC51C6237A40355CAFFCA922A59C8DC75CE9D76DE*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_40, L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_42: *(void**)L_42), L_43, L_44);
				// stack.ExitParentElement();
				GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* L_45 = ___stack0;
				NullCheck(L_45);
				GraphStack_ExitParentElement_mB4379BEC03B4DF2D6A7674C01B9970CB98290568(L_45, NULL);
			}

IL_00d8_1:
			{
			}

IL_00d9_1:
			{
			}

IL_00da_1:
			{
				// foreach (var element in stack.graph.elements)
				bool L_46;
				L_46 = Enumerator_MoveNext_mE81D2669987C89E3765D51D883A7198F732D0777((&V_1), Enumerator_MoveNext_mE81D2669987C89E3765D51D883A7198F732D0777_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_00f7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f7:
	{
		// }
		return;
	}
}
// T Unity.VisualScripting.XGettable::GetValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.VisualScripting.IGettable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XGettable_GetValue_TisIl2CppFullySharedGenericAny_m033A41C945C16677DD773FC8D8A7B22DA1614AE5_gshared (RuntimeObject* ___gettable0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t134C68BE94C2D1C752CF15A77235F9F58604371C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t134C68BE94C2D1C752CF15A77235F9F58604371C);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t134C68BE94C2D1C752CF15A77235F9F58604371C);
	memset(V_0, 0, SizeOf_T_t134C68BE94C2D1C752CF15A77235F9F58604371C);
	{
		// return (T)gettable.GetValue(typeof(T));
		RuntimeObject* L_0 = ___gettable0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		RuntimeObject* L_3;
		L_3 = XGettable_GetValue_m95F01A4D28C7B731BA306F210B79B71E528821F8(L_0, L_2, NULL);
		void* L_5 = UnBox_Any(L_3, il2cpp_rgctx_data(method->rgctx_data, 1), L_4);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_5))), SizeOf_T_t134C68BE94C2D1C752CF15A77235F9F58604371C);
		goto IL_0019;
	}

IL_0019:
	{
		// }
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T_t134C68BE94C2D1C752CF15A77235F9F58604371C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t134C68BE94C2D1C752CF15A77235F9F58604371C);
		return;
	}
}
// System.Void Unity.VisualScripting.XHashSetPool::Free<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.HashSet`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashSetPool_Free_TisIl2CppFullySharedGenericAny_mD3C44EF56914027279626B280AFF58DC67837AAD_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___hashSet0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// HashSetPool<T>.Free(hashSet);
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___hashSet0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		InvokerActionInvoker1< HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		// }
		return;
	}
}
// System.Collections.Generic.HashSet`1<T> Unity.VisualScripting.XHashSetPool::ToHashSetPooled<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* XHashSetPool_ToHashSetPooled_TisIl2CppFullySharedGenericAny_mFB29D37E80025D4A5EB29343C794B6B8AEA93427_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tA94FBA9EFC6686437720277164A4E9FFDCEE4785 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tA94FBA9EFC6686437720277164A4E9FFDCEE4785);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tA94FBA9EFC6686437720277164A4E9FFDCEE4785);
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tA94FBA9EFC6686437720277164A4E9FFDCEE4785);
	memset(V_2, 0, SizeOf_T_tA94FBA9EFC6686437720277164A4E9FFDCEE4785);
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_3 = NULL;
	{
		// var hashSet = HashSetPool<T>.New();
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0;
		L_0 = InvokerFuncInvoker0< HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// foreach (var item in source)
		RuntimeObject* L_1 = ___source0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 3), L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0036;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_0036:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0011_1:
			{
				// foreach (var item in source)
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 5), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_2, L_6, SizeOf_T_tA94FBA9EFC6686437720277164A4E9FFDCEE4785);
				// hashSet.Add(item);
				HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_7 = V_0;
				il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T_tA94FBA9EFC6686437720277164A4E9FFDCEE4785);
				NullCheck(L_7);
				bool L_9;
				L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 7)) ? L_8: *(void**)L_8));
			}

IL_0022_1:
			{
				// foreach (var item in source)
				RuntimeObject* L_10 = V_1;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0037;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// return hashSet;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_0;
		V_3 = L_12;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_13 = V_3;
		return L_13;
	}
}
// System.Void Unity.VisualScripting.XListPool::Free<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XListPool_Free_TisIl2CppFullySharedGenericAny_mCAE8812C69C68DA40DF7F5EB9908D8ED9848743E_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___list0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// ListPool<T>.Free(list);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___list0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		InvokerActionInvoker1< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<T> Unity.VisualScripting.XListPool::ToListPooled<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* XListPool_ToListPooled_TisIl2CppFullySharedGenericAny_m5090F97A17CBC1EF81693C4724D0BF449C049CFA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tB242626F7D9116556C52E3B745DD925518684086 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tB242626F7D9116556C52E3B745DD925518684086);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tB242626F7D9116556C52E3B745DD925518684086);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tB242626F7D9116556C52E3B745DD925518684086);
	memset(V_2, 0, SizeOf_T_tB242626F7D9116556C52E3B745DD925518684086);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_3 = NULL;
	{
		// var list = ListPool<T>.New();
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0;
		L_0 = InvokerFuncInvoker0< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// foreach (var item in source)
		RuntimeObject* L_1 = ___source0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 3), L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0036;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_0036:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0011_1:
			{
				// foreach (var item in source)
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 5), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_2, L_6, SizeOf_T_tB242626F7D9116556C52E3B745DD925518684086);
				// list.Add(item);
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = V_0;
				il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T_tB242626F7D9116556C52E3B745DD925518684086);
				NullCheck(L_7);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 7)) ? L_8: *(void**)L_8));
			}

IL_0022_1:
			{
				// foreach (var item in source)
				RuntimeObject* L_9 = V_1;
				NullCheck((RuntimeObject*)L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
				if (L_10)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0037;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// return list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = V_0;
		V_3 = L_11;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = V_3;
		return L_12;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mCA7EA6586E1C7C8B358B9FD1F058915BA583D905_gshared (intptr_t ___array0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ArrayType)
	const uint32_t SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ArrayType
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	const Il2CppFullySharedGenericAny L_20 = L_12;
	const Il2CppFullySharedGenericAny L_28 = L_12;
	const Il2CppFullySharedGenericAny L_36 = L_12;
	const Il2CppFullySharedGenericAny L_44 = L_12;
	const Il2CppFullySharedGenericAny L_52 = L_12;
	const Il2CppFullySharedGenericAny L_60 = L_12;
	const Il2CppFullySharedGenericAny L_68 = L_12;
	const Il2CppFullySharedGenericAny L_76 = L_12;
	const Il2CppFullySharedGenericAny L_99 = L_12;
	const Il2CppFullySharedGenericAny L_122 = L_12;
	const Il2CppFullySharedGenericAny L_129 = L_12;
	const Il2CppFullySharedGenericAny L_130 = L_12;
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	memset(V_3, 0, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppFullySharedGenericAny V_24 = alloca(SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	memset(V_24, 0, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		void* L_13 = UnBox_Any((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1), L_12);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_13))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_18 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19;
		L_19 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_18, NULL);
		void* L_21 = UnBox_Any((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 1), L_20);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_21))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_26 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_26, NULL);
		void* L_29 = UnBox_Any((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1), L_28);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_29))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_34 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35;
		L_35 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_34, NULL);
		void* L_37 = UnBox_Any((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1), L_36);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_37))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_38 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_39, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_38) == ((RuntimeObject*)(Type_t*)L_40))? 1 : 0);
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_42 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43;
		L_43 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_42, NULL);
		void* L_45 = UnBox_Any((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_45))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_46 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_47, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_46) == ((RuntimeObject*)(Type_t*)L_48))? 1 : 0);
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_50 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51;
		L_51 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_50, NULL);
		void* L_53 = UnBox_Any((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 1), L_52);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_53))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_58 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59;
		L_59 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_58, NULL);
		void* L_61 = UnBox_Any((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1), L_60);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_61))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_62 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_63, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_62) == ((RuntimeObject*)(Type_t*)L_64))? 1 : 0);
		bool L_65 = V_10;
		if (!L_65)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_66 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_67;
		L_67 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_66, NULL);
		void* L_69 = UnBox_Any((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 1), L_68);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_69))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_70 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_71, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_70) == ((RuntimeObject*)(Type_t*)L_72))? 1 : 0);
		bool L_73 = V_11;
		if (!L_73)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_74 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_75;
		L_75 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_74, NULL);
		void* L_77 = UnBox_Any((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 1), L_76);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_77))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_78 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_79, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_78) == ((RuntimeObject*)(Type_t*)L_80))? 1 : 0);
		bool L_81 = V_12;
		if (!L_81)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_82 = ___array0;
		int32_t L_83;
		L_83 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_82, NULL);
		V_13 = L_83;
		int32_t L_84 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_84);
		V_14 = L_85;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_86 = ___array0;
		int32_t L_87 = V_15;
		intptr_t L_88;
		L_88 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_86, L_87, NULL);
		V_16 = L_88;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = V_14;
		int32_t L_90 = V_15;
		intptr_t L_91 = V_16;
		String_t* L_92;
		L_92 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_91, NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_92);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (String_t*)L_92);
		intptr_t L_93 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_93, NULL);
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01c3:
	{
		int32_t L_95 = V_15;
		int32_t L_96 = V_13;
		V_17 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_17;
		if (L_97)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = V_14;
		void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_100))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_101 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_102, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(Type_t*)L_103))? 1 : 0);
		bool L_104 = V_18;
		if (!L_104)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_105 = ___array0;
		int32_t L_106;
		L_106 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_105, NULL);
		V_19 = L_106;
		int32_t L_107 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_108 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_107);
		V_20 = L_108;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_109 = ___array0;
		int32_t L_110 = V_21;
		intptr_t L_111;
		L_111 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_109, L_110, NULL);
		V_22 = L_111;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_112 = V_20;
		int32_t L_113 = V_21;
		intptr_t L_114 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_115 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_115);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_115, L_114, NULL);
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_115);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_115);
		intptr_t L_116 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_116, NULL);
		int32_t L_117 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_022c:
	{
		int32_t L_118 = V_21;
		int32_t L_119 = V_19;
		V_23 = (bool)((((int32_t)L_118) < ((int32_t)L_119))? 1 : 0);
		bool L_120 = V_23;
		if (L_120)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_121 = V_20;
		void* L_123 = UnBox_Any((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1), L_122);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_123))), SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_124 = V_0;
		Type_t* L_125 = L_124;
		G_B31_0 = L_125;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_125)
		{
			G_B32_0 = L_125;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_126;
		L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_126;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_127;
		L_127 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_128);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mCA7EA6586E1C7C8B358B9FD1F058915BA583D905_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_24, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		il2cpp_codegen_memcpy(L_129, V_24, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		il2cpp_codegen_memcpy(V_3, L_129, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		goto IL_0272;
	}

IL_0272:
	{
		il2cpp_codegen_memcpy(L_130, V_3, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_130, SizeOf_ArrayType_t39F42761AC90C900B8A48509E901BA6E97D3879B);
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m62713F90A297B2D7E15FFCFC03A6D3E9B1437CE1_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_m610860C26BAF5ACB7F62BA3621F9C22C47453951_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = InvokerFuncInvoker1< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2);
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_mDBF81B16A0FEEB1BA244976285B52E8770108EDF_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::DeserializeMember<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,System.Type,System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_DeserializeMember_TisIl2CppFullySharedGenericAny_mD950968993B7222E483356975AAB178517564D4A_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (data.TryGetValue(name, out memberData) == false)
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = ___data0;
		String_t* L_1 = ___name2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4BD12A9570DB1688959FB20D85A74C4E7AB1365F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// value = default(T);
		Il2CppFullySharedGenericAny* L_4 = ___value3;
		il2cpp_codegen_initobj(L_4, SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
		// return fsResult.Fail("Unable to find member \"" + name + "\"");
		String_t* L_5 = ___name2;
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC5CDDB8FEA16C1A648482CD85EA1558E0EADFB23, L_5, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7;
		L_7 = fsResult_Fail_m743EBD70D2E0FD9DBC9181E3F2393EB7B326E09A(L_6, NULL);
		V_4 = L_7;
		goto IL_0061;
	}

IL_0033:
	{
		// object storage = null;
		V_1 = NULL;
		// var result = Serializer.TryDeserialize(memberData, typeof(T), overrideConverterType, ref storage);
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_8 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		Type_t* L_12 = ___overrideConverterType1;
		NullCheck(L_8);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = fsSerializer_TryDeserialize_m675340784F47BA9FF50C193F53A3BAAA1D18D2B9(L_8, L_9, L_11, L_12, (&V_1), NULL);
		V_2 = L_13;
		// value = (T)storage;
		Il2CppFullySharedGenericAny* L_14 = ___value3;
		RuntimeObject* L_15 = V_1;
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_14, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_17))), SizeOf_T_t66A6B07095DD463B03FC01500296FB7356DCAEB1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_14, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_17))));
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_18 = V_2;
		V_4 = L_18;
		goto IL_0061;
	}

IL_0061:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_4;
		return L_19;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::SerializeMember<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,System.Type,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_SerializeMember_TisIl2CppFullySharedGenericAny_m79CBD6541C56F6775C6AFE833F82B8B7DE1AD522_gshared (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___data0, Type_t* ___overrideConverterType1, String_t* ___name2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var result = Serializer.TrySerialize(typeof(T), overrideConverterType, value, out memberData);
		fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* L_0 = (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC*)__this->___Serializer_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		Type_t* L_3 = ___overrideConverterType1;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___value3 : &___value3), SizeOf_T_t3A237E4AA0892E30C7702FD24E2E0300B01B1262);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_4);
		NullCheck(L_0);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6;
		L_6 = fsSerializer_TrySerialize_m2E029A68D43C8F4783B5912AB8004658E41AB84B(L_0, L_2, L_3, L_5, (&V_0), NULL);
		V_1 = L_6;
		// if (result.Succeeded)
		bool L_7;
		L_7 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		// data[name] = memberData;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_9 = ___data0;
		String_t* L_10 = ___name2;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = V_0;
		NullCheck(L_9);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_9, L_10, L_11, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
	}

IL_0037:
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_1;
		V_3 = L_12;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_3;
		return L_13;
	}
}
// T Unity.VisualScripting.FullSerializer.fsContext::Get<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
	memset(V_2, 0, SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (_contextObjects.TryGetValue(typeof(T), out val))
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return (T)val;
		RuntimeObject* L_5 = V_0;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(method->rgctx_data, 1), L_6);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_7))), SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
		goto IL_004c;
	}

IL_0026:
	{
		// throw new InvalidOperationException("There is no context object of type " + typeof(T));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA2F217B5B8E3E9CFB32D71843BB131F5263FF34));
			goto IL_003c;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0041;
	}

IL_003c:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_0041:
	{
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B5_1, G_B5_0, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsContext_Get_TisIl2CppFullySharedGenericAny_m291C6F4855EE2BB88FED4FA436058E2BDABA90A5_RuntimeMethod_var)));
	}

IL_004c:
	{
		// }
		il2cpp_codegen_memcpy(L_14, V_2, SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_T_t4FF9F0AFC05B7E0F85A4B934B59D234155F6E4A5);
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsContext::Has<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsContext_Has_TisIl2CppFullySharedGenericAny_m60702DAF2270011FD07AF8C14E9712D49CC0EDE8_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		// return _contextObjects.ContainsKey(typeof(T));
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235(L_0, L_2, Dictionary_2_ContainsKey_m3A07ACED015F6AF2D8A572F61F7983D483EBB235_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsContext::Set<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsContext_Set_TisIl2CppFullySharedGenericAny_mAB9E5A73CD1BC1599F11B9B5FF1CDAE55086E05C_gshared (fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B);
	{
		// _contextObjects[typeof(T)] = obj;
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)__this->____contextObjects_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___obj0 : &___obj0), SizeOf_T_t5A1B1DFB3DBD00270ED3B0AD25CD7659CF44974B);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_3);
		NullCheck(L_0);
		Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_0, L_2, L_4, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		// }
		return;
	}
}
// T Unity.VisualScripting.FullSerializer.fsData::Cast<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_gshared (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
	const Il2CppFullySharedGenericAny L_23 = L_3;
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
	memset(V_1, 0, SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Type_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	{
		// if (_value is T)
		RuntimeObject* L_0 = (RuntimeObject*)__this->____value_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// return (T)_value;
		RuntimeObject* L_2 = (RuntimeObject*)__this->____value_0;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_4))), SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
		goto IL_008e;
	}

IL_0022:
	{
		// throw new InvalidCastException("Unable to cast <" + this + "> (with type = " +
		//     _value.GetType() + ") to type " + typeof(T));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D9F5FED5D5FDCEC590AB755ABB05168B0C0B356);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		G_B3_0 = __this;
		G_B3_1 = 1;
		G_B3_2 = L_7;
		G_B3_3 = L_7;
		if (__this)
		{
			G_B4_0 = __this;
			G_B4_1 = 1;
			G_B4_2 = L_7;
			G_B4_3 = L_7;
			goto IL_003a;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_003f;
	}

IL_003a:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_003f:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = G_B5_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537F955588893B499438876FBA6FFDB5522EB027)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		RuntimeObject* L_11 = (RuntimeObject*)__this->____value_0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		Type_t* L_13 = L_12;
		G_B6_0 = L_13;
		G_B6_1 = 3;
		G_B6_2 = L_10;
		G_B6_3 = L_10;
		if (L_13)
		{
			G_B7_0 = L_13;
			G_B7_1 = 3;
			G_B7_2 = L_10;
			G_B7_3 = L_10;
			goto IL_005c;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject*)G_B7_0);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B7_0);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0061:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F55817E612497BA20DDBC0EA7111ED68FC1666E)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		Type_t* L_19 = L_18;
		G_B9_0 = L_19;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_19)
		{
			G_B10_0 = L_19;
			G_B10_1 = 5;
			G_B10_2 = L_16;
			G_B10_3 = L_16;
			goto IL_007d;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_0082;
	}

IL_007d:
	{
		NullCheck((RuntimeObject*)G_B10_0);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B10_0);
		G_B11_0 = L_20;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_0082:
	{
		NullCheck(G_B11_2);
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		String_t* L_21;
		L_21 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B11_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_22 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsData_Cast_TisIl2CppFullySharedGenericAny_m59964E85C8553DF957981BF63F5C2EC6703B8888_RuntimeMethod_var)));
	}

IL_008e:
	{
		// }
		il2cpp_codegen_memcpy(L_23, V_1, SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_23, SizeOf_T_tBE9A67E171C85D8CA29A1569A871BCDB274C8EBF);
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsEnumConverter::ArrayContains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsEnumConverter_ArrayContains_TisIl2CppFullySharedGenericAny_m3A22D8C2C7BBA3522EF7A3E0E58FE96876132EC7_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t86325FD4DE71DF90B5BFB936E23D69CA134AD758 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t86325FD4DE71DF90B5BFB936E23D69CA134AD758);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t86325FD4DE71DF90B5BFB936E23D69CA134AD758);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (var i = 0; i < values.Length; ++i)
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		// if (EqualityComparer<T>.Default.Equals(values[i], value))
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___values0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_t86325FD4DE71DF90B5BFB936E23D69CA134AD758);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___value1 : &___value1), SizeOf_T_t86325FD4DE71DF90B5BFB936E23D69CA134AD758);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Equals(T,T) */, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_5: *(void**)L_5));
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0034;
	}

IL_0021:
	{
		// for (var i = 0; i < values.Length; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		// for (var i = 0; i < values.Length; ++i)
		int32_t L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___values0;
		NullCheck(L_10);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption::Just<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_Just_TisIl2CppFullySharedGenericAny_m6D11BFF86848BEB914AF8B77F525EBED38D06D04_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T>)
	const uint32_t SizeOf_fsOption_1_t98547E0B4AD98FAE6893743FDE6385F6E816210E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(T)
	const uint32_t SizeOf_T_t7E357E8DBA1EF2C3AB70B276DF9C09435308F1E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t7E357E8DBA1EF2C3AB70B276DF9C09435308F1E9);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t7E357E8DBA1EF2C3AB70B276DF9C09435308F1E9);
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T>
	const fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88 L_2 = alloca(SizeOf_fsOption_1_t98547E0B4AD98FAE6893743FDE6385F6E816210E);
	const fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88 L_3 = L_2;
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88 V_0 = alloca(SizeOf_fsOption_1_t98547E0B4AD98FAE6893743FDE6385F6E816210E);
	memset(V_0, 0, SizeOf_fsOption_1_t98547E0B4AD98FAE6893743FDE6385F6E816210E);
	{
		// return new fsOption<T>(value);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value0 : &___value0), SizeOf_T_t7E357E8DBA1EF2C3AB70B276DF9C09435308F1E9);
		memset(L_2, 0, SizeOf_fsOption_1_t98547E0B4AD98FAE6893743FDE6385F6E816210E);
		fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t7E357E8DBA1EF2C3AB70B276DF9C09435308F1E9): *(void**)L_0), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_fsOption_1_t98547E0B4AD98FAE6893743FDE6385F6E816210E);
		goto IL_000a;
	}

IL_000a:
	{
		// }
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_fsOption_1_t98547E0B4AD98FAE6893743FDE6385F6E816210E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_fsOption_1_t98547E0B4AD98FAE6893743FDE6385F6E816210E);
		return;
	}
}
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_mA6AB97DFA93AF737E3CBB865A07F2F6D715E074E_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		// return GetAttribute<TAttribute>(element, /*shouldCache:*/ true);
		MemberInfo_t* L_0 = ___element0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker2< RuntimeObject*, MemberInfo_t*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (bool)1);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m787A2638AF10AF1817767A0CCFD4E505C153D1BA_gshared (MemberInfo_t* ___element0, bool ___shouldCache1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (TAttribute)GetAttribute(element, typeof(TAttribute), shouldCache);
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3 = ___shouldCache1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_4;
		L_4 = fsPortableReflection_GetAttribute_m37548D421D7B44CD0655C1B3E115119ACBA373A6(L_0, L_2, L_3, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_TisIl2CppFullySharedGenericAny_mA35E9F3BDD12013DB6A77C18E1D15139CA8C6CAE_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		// return HasAttribute(element, typeof(TAttribute));
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = fsPortableReflection_HasAttribute_mC0326C8FE1569E3468E7D097571F92CFFD81C20F(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_TisIl2CppFullySharedGenericAny_m960B5EBF8FA535BBD2827897635E9C13AD39A26C_gshared (MemberInfo_t* ___element0, bool ___shouldCache1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		// return HasAttribute(element, typeof(TAttribute), shouldCache);
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3 = ___shouldCache1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = fsPortableReflection_HasAttribute_m1591D66931F5DCA9D03C43C145DE054A439E7E8A(L_0, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsSerializer::RemoveProcessor<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsSerializer_RemoveProcessor_TisIl2CppFullySharedGenericAny_m03043ABAEDFAE8695A48DB25E081FE6F138A4185_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// var i = 0;
		V_0 = 0;
		goto IL_0036;
	}

IL_0005:
	{
		// if (_processors[i] is TProcessor)
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_0 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* L_2;
		L_2 = List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4(L_0, L_1, List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// _processors.RemoveAt(i);
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_4 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9(L_4, L_5, List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var);
		goto IL_0035;
	}

IL_002f:
	{
		// ++i;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0035:
	{
	}

IL_0036:
	{
		// while (i < _processors.Count)
		int32_t L_7 = V_0;
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_8 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_inline(L_8, List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		// _cachedProcessors = new Dictionary<Type, List<fsObjectProcessor>>();
		Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* L_11 = (Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04*)il2cpp_codegen_object_new(Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6(L_11, Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var);
		__this->____cachedProcessors_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedProcessors_8), (void*)L_11);
		// }
		return;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TryDeserialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.VisualScripting.FullSerializer.fsData,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_TisIl2CppFullySharedGenericAny_m8F46C3E4472E3EACA5D9F7A58E397A6D10546582_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___instance1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	RuntimeObject* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// object boxed = instance;
		Il2CppFullySharedGenericAny* L_0 = ___instance1;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		V_0 = L_2;
		// var fail = TryDeserialize(data, typeof(T), ref boxed);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_3 = ___data0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6;
		L_6 = fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2(__this, L_3, L_5, (&V_0), NULL);
		V_1 = L_6;
		// if (fail.Succeeded)
		bool L_7;
		L_7 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// instance = (T)boxed;
		Il2CppFullySharedGenericAny* L_9 = ___instance1;
		RuntimeObject* L_10 = V_0;
		void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(method->rgctx_data, 1), L_11);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_12))), SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_12))));
	}

IL_003a:
	{
		// return fail;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_1;
		V_3 = L_13;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14 = V_3;
		return L_14;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_TisIl2CppFullySharedGenericAny_mD467C2221EABCCED5F049B2996388895D66CD6A3_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return TrySerialize(typeof(T), instance, out data);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___instance0 : &___instance0), SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___data1;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006(__this, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6 = V_0;
		return L_6;
	}
}
// TAttribute Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttribute_TisRuntimeObject_m8D7B16DA8433AA2FD4CC676A84EA8FE6D90195FC_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		// return (TAttribute)GetAttribute(typeof(TAttribute), inherit);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2 = ___inherit0;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9(__this, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<TAttribute> Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttributes<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_TisRuntimeObject_mF38C8F9E5ADBB7CCB1F9A885311EB62F139E4063_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		// return GetAttributes(typeof(TAttribute), inherit).Cast<TAttribute>();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2 = ___inherit0;
		RuntimeObject* L_3;
		L_3 = AttributeCache_GetAttributes_m1CD217D40A4463684936A49453828BF294D2CD6F(__this, L_1, L_2, NULL);
		RuntimeObject* L_4;
		L_4 = InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (RuntimeObject*)L_3);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Unity.VisualScripting.AttributeUtility/AttributeCache::HasAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_TisRuntimeObject_m33C55B47DD3C264A03B4158F49782290B1B7E4FD_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		// return HasAttribute(typeof(TAttribute), inherit);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2 = ___inherit0;
		bool L_3;
		L_3 = AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7(__this, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = InvokerFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15);
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2Invoker< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(19 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) 
{
	{
		// public bool Succeeded => _success;
		bool L_0 = __this->____success_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m336ABC06C105BA0A7B0EA3C778D651377D030F78_gshared_inline (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TItem)
	const uint32_t SizeOf_TItem_t31184AB7EE5226B40109AECE0E99E8DFCCCB9CC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	// TItem
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TItem_t31184AB7EE5226B40109AECE0E99E8DFCCCB9CC1);
	{
		// public TItem Current => currentItem;
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_TItem_t31184AB7EE5226B40109AECE0E99E8DFCCCB9CC1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TItem_t31184AB7EE5226B40109AECE0E99E8DFCCCB9CC1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
